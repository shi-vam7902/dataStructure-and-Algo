#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 5

int Q[SIZE];
int front = -1; // alwys for delete Function
int rear = -1;
int isFull()
{
    return rear == SIZE - 1;
}
// is Full
int isEmpty()
{
    return rear == -1;
}
void insert(int num)
{
    if (isFull())
    {
        printf("\nThe Queue is Full");
    }
    rear++; // moving ahead for insert
    Q[rear] = num;
    if (front == -1)
    {
        front = 0;
    }
}
// insertion

void display()
{
    int i;
    if (isEmpty())
    {
        printf("\n Q is Empty");
    }
    else
    {
        
        for (i = front; i < rear; i++)
        {
            printf("    %d", Q[i]);
        }
    }
}
int delete()
{
    int num = -1;
    if (isEmpty)
    {
        printf("\nQ iS Empty");
    }
    else
    {
        num = -1;
        Q[front] = num;
        front++;
        printf("\n%d", "Number Deleted");
    }
    return num;
}
int main()
{
    int num;
    int choice;
    while (-1)
    {

        printf("\n0-For Exit\n1-For Insert\n2-For Delete\n3-For Delete\n");
        scanf("\n%d", &choice);

        switch (choice)
        {
        case 0:
             exit(0);
            break;
        case 1:
            printf("Enter The Number For Insertion in the Queue");
            scanf("\n%d", &num);
            insert(num);
            break;

        case 2:
            delete ();
            break;

        case 3:
            display();
            break;

        default:
            printf("\nInvalid Choice...");
            break;
        }
        /* code */
    }
    return 0;
}