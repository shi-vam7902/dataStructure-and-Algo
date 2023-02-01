#include <stdio.h>
#include <stdlib.h>
#define S 5
int q[S];
int front = -1;
int rear = -1;
int isFull()
{
    if (front == 0 && rear == S - 1)
    {
        return 1;
    }
    else if (rear == front - 1)
    {
        return 1;
    }
    else
        return 0;
}
int isEmpty()
{
    return front == -1;
}
void insert(int num)
{
    if (isFull())
    {
        printf("\nThe Queue id Full");
    }
    else
    {
        if (front == -1)
            front++;
        if (rear == S - 1)
        {
            rear = 0;
            q[rear] = num;
        }
        else
        {
            rear++;
            q[rear] = num;
        }
    }
}
void display()
{
    int i;
    if (isEmpty())
    {
        printf("\nQueue is Empty....");
    }
    else if (rear < front)
    {
        for (i == front; i <= S - 1; i++)
        {
            printf(" %d ", q[i]);
        }
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf(" %d ", q[i]);
        }
    }
}
int delete()
{
    if (isEmpty())
    {
        printf("\nQueue is Empty...");
    }
    else
    {
        printf("\n %d deleted ... ", q[front]);
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == S - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    
}
int main()
{
    int choice;
    int num;

    while (-1)
    {
        printf("\n0 For Exit\n1 For Insert\n2 For Delete\n3 For Display\nEnter your choice...");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter value");
            scanf("%d", &num);
            insert(num);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }
    return 0;
}