#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *start, *newnode;

void create_11()
{
    start = NULL;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d", &newnode->data);

    newnode->next = start;
    start = newnode;
}

void display()
{
    struct node *ptr;

    for(ptr = start; ptr != NULL; ptr = ptr->next)
    {
        printf("\n%d", ptr->data);
    }
}

void main()
{
    int ch;
    start = NULL;

    while(1)
    {
        printf("\n1. Create");
        printf("\n2. Display");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                create_11();
                break;

            case 2:
                display();
                break;

            case 3:
                exit(0);

            default:
                printf("Wrong choice");
        }
    }
}
