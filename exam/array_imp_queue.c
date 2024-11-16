#include <stdio.h>
#define MAX 5
int main()
{
    int queue[MAX];
    int front = -1, rear = -1;
    if (rear < MAX - 1)
    {
        if (front == -1)

            front = 0;
        queue[++rear] = 10;
        printf(" 10 Enqueued to queue \n");
    }
    else
    {
        printf(" Overflow \n");
    }
    if (rear < MAX - 1)
    {
        if (front == -1)

            front = 0;
        queue[++rear] = 20;
        printf(" 20 Enqueued to queue \n");
    }
    else
    {
        printf(" Overflow \n");
    }

    // display element
    printf(" Queue element ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    // dequeue element
    if (front != -1 && front <= rear)
    {
        printf("\nPopped : %d\n", queue[front++]);
    }
    else
    {
        printf("Queue underflow \n");
    }
    // display
    printf("Element after dequeue \n");
    for (int i = front; i <= rear; i++)
    {
        printf(" %d", queue[i]);
    }
}