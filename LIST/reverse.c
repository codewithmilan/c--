// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// int main()
// {
//     struct node *head = NULL;
//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         struct node *temp = (struct node *)malloc(sizeof(struct node));
//         temp->data = arr[i];
//         temp->next = head;
//         head = temp;
//     }
//     while (head != NULL)
//     {
//         printf("%d ", head->data);
//         head = head->next;
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = NULL;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = head;
        head = temp;
    }
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}