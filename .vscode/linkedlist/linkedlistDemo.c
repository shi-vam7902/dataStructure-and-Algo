#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void addNode(int num);
void askDelete(int num);
void display();
void deleteLast();
void deleteAtBegin();
void addBegin();
void search();
void deleteAny();

struct node
{
    /* data */
    int data;
    struct node *next;        // self refrential structure
} *head = NULL, *last = NULL; // nothing in memory

int main()
{
    int choice;
    int num;
    while (1)
    {
        printf("\n0->Exit");
        printf("\n1->Add Node");
        printf("\n2->Display");
        printf("\n3->Delete");
        printf("\n4-Delete Begin");
        printf("\n5-Search");
        printf("\n6-Add At begin");
        printf("\n7-Delete Any Number");
        printf("\nEnter choice => ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\n Enter The Number=> ");
            scanf("%d", &num);
            addNode(num);
            break;

        case 2:
            display();
            break;
        case 3:
            deleteLast();
            break;
        case 4:
            deleteAtBegin();
            break;
        case 5:
            search();
            break;
        case 6:
            addBegin();
            break;
        case 7:
            printf("\n Enter The Number You Want to Delete => ");
            scanf("%d", &num);
            askDelete(num);
            break;

        default:
            printf("\n Error Try Again");
            break;
        }
    }
    return 0;
}
void addNode(int no)
{
    struct node *temp;

    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        printf("\n head created");
        head->data = no;
        printf("\n number stored in data");
        head->next = NULL;
        printf("\n setting our next as null currently");
        last = head;
        printf("\n last = head");
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("temp variable created");
        temp->data = no;
        temp->next = NULL;
        last->next = temp;
        last = temp;
        printf("\n last = temp");
    }
}
// creating node
void display()

{
    struct node *p;

    if (head == NULL)
    {
        /* code */
        printf("\n The List is Empty");
    }
    else
    {
        p = head;
        while (p != NULL)
        {
            printf(" Address Location %d =>Value is  %d\n", p, p->data);
            p = p->next;
        }
    }
}
void askDelete(int num)
{
    struct node *p = head; // for del
    bool isAlb = 0;
    while (p != NULL)
    {
        if (p->data == num)
        {
            isAlb = 1;
            break;
        }
        p = p->next;
    }
    // isAlb == 1 ? free() printf("\n The Number Found is at location => %d", num) : printf("\n The Number not found");
    if (isAlb == 1)
    {
        while (p->next != last)
        {
            /* code */
            p = p->next;
            printf("in while");
            printf("\n The Element Deleted is => %d", p->data);
        }
        p->next = NULL;
        free(last);
        last = p;
    }
}
void deleteLast()
{
    struct node *p = head;
    while (p->next != last)
    {
        /* code */
        p = p->next;
        printf("\n The Element Deleted is => %d", p->data);
    }
    p->next = NULL;
    free(last);
    last = p;
}
void deleteAtBegin()
{
    struct node *p = head;
    head = head->next;
    free(p);
}
void search()

{
    int num;
    bool isAlb = 0;
    struct node *p;
    printf("\n Enter The element You want to search=> ");
    scanf("%d", &num);
    p = head;
    while (p != NULL)
    {
        if (p->data == num)
        {
            isAlb = 1;
        }
        p = p->next;
    }
    isAlb == 1 ? printf("\n The Number Found is at location => %d", num) : printf("\n The Number not found");
}

void addBegin()
{
    int num;
    struct node *tmp;
    printf("\n Enter the Number u Want to Insert at The begin--> ");
    scanf("%d", &num);

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = num;
    tmp->next = head;
    head = tmp;
}