#include <crow.h>
#include <string>
#include <vector>
#include <mutex> // For thread safety

class Student {
private:
    std::string name;
    int rollNo;
    float marks;

public:
    Student(std::string n, int r, float m) : name(std::move(n)), rollNo(r), marks(m) {}

    std::string getName() const { return name; }
    int getRollNo() const { return rollNo; }
    float getMarks() const { return marks; }
};

class StudentRecordSystem {
private:
    std::vector<Student> students;
    std::mutex mtx; // Protect vector in multithreaded access

public:
    bool addStudent(const std::string& name, int rollNo, float marks) {
        std::lock_guard<std::mutex> lock(mtx);
        for (const auto& s : students) {
            if (s.getRollNo() == rollNo) {
                return false; // Duplicate roll number
            }
        }
        students.emplace_back(name, rollNo, marks);
        return true;
    }

    std::vector<Student> getStudents() {
        std::lock_guard<std::mutex> lock(mtx);
        return students;
    }
};

int main() {
    crow::SimpleApp app;
    StudentRecordSystem system;

    // Add student route
    CROW_ROUTE(app, "/addStudent").methods("POST"_method)
    ([&system](const crow::request& req) {
        auto data = crow::json::load(req.body);
        if (!data || !data.has("name") || !data.has("rollNo") || !data.has("marks")) {
            return crow::response(400, "Invalid or missing JSON fields");
        }

        std::string name = data["name"].s();
        int rollNo = data["rollNo"].i();
        float marks = static_cast<float>(data["marks"].d());

        bool added = system.addStudent(name, rollNo, marks);
        if (!added) {
            return crow::response(409, "Student with this roll number already exists");
        }

        return crow::response(200, "Student added successfully");
    });

    // Get all students route
    CROW_ROUTE(app, "/getStudents")
    ([&system]() {
        crow::json::wvalue result;
        auto students = system.getStudents(); // Local copy, safe
        for (size_t i = 0; i < students.size(); ++i) {
            result[i]["name"] = students[i].getName();
            result[i]["rollNo"] = students[i].getRollNo();
            result[i]["marks"] = students[i].getMarks();
        }
        return crow::response(result);
    });

    // Start server
    app.port(8080).multithreaded().run();
}
