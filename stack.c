#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE];
int top = -1;
//isEmpty
int isEmpty()
{
    return top == -1;
}
//return is Full
int isFull()
{
    return top == SIZE - 1;
}
//1 pushing element into the stack
void push(int num)
{
    if(isFull())
    {
        printf("\nStack OverFLow");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}
// removing from stack
int pop()
{
    int num = -1;
    if(isEmpty())
    {
        printf("\nStack UnderFlow...");
    }else{
        num = stack[top];
        printf("\n%d  Popped SuccessFully",num);
        top--;
    }
    return num;
}
// display
void display()
{
   int i;
    if(isEmpty())
    {
        printf("\n StackUnderFlow...");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("\n%d is ",stack[i]);
        }
    }
}
//peek
int peek()
{
    if(isEmpty())
    {
        return -1;
    }
    else
    {
        printf("\n%d",stack[top]);
        return stack[top];
    }

}

int peep(int loc)
{
    int index;
    index = top-loc +1;
    if(index < 0)
    {
        printf("\n Invalid Location");
        return -1;
    }
    printf("\n%d",stack[index]);
    
    return stack[index];
}

int main()
{
      int choice;
      int num;
      int location;
    while (-1)// 0 false num// true
    {
        printf("\n1.Enter 1 for Push\n2.Enter 2 for Pop\n3.Enter 3 for Display\n4.Enter 4 for Peep\n5.Enter 5 for Peek\nPlease Enter Your Choice =>");
        scanf("%d",&choice); 

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:

            printf("\n Enter the Number For Insertion : ");
            scanf("%d",&num);
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            printf("\n Please Enter Valid Location");
            scanf("%d",&location);
            peep(location);
            break;
        default:
        printf("/n Invalid Choice");
            break;
        }
    }
  return 0;
}