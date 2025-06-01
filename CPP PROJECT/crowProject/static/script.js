document.getElementById('studentForm').addEventListener('submit', async (e) => {
    e.preventDefault();

    const name = document.getElementById('name').value;
    const rollNo = parseInt(document.getElementById('rollNo').value);
    const marks = parseFloat(document.getElementById('marks').value);

    try {
        const response = await fetch('http://localhost:8080/addStudent', {
            method: 'POST',
            headers: { 'Content-Type': 'application/json' },
            body: JSON.stringify({ name, rollNo, marks })
        });
        if (response.ok) {
            alert('Student added successfully!');
            document.getElementById('studentForm').reset();
            loadStudents();
        } else {
            alert('Error adding student.');
        }
    } catch (error) {
        console.error('Error:', error);
    }
});

async function loadStudents() {
    try {
        const response = await fetch('http://localhost:8080/getStudents');
        const students = await response.json();
        const studentList = document.getElementById('studentList');
        studentList.innerHTML = '';
        for (const student of students) {
            const row = document.createElement('tr');
            row.innerHTML = `
                <td>${student.rollNo}</td>
                <td>${student.name}</td>
                <td>${student.marks}</td>
            `;
            studentList.appendChild(row);
        }
    } catch (error) {
        console| console.error('Error loading students:', error);
    }
}

// Load students when page loads
loadStudents();