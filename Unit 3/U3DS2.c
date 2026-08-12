#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *start = NULL;

void insert_start()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d", &newnode->data);
    newnode->next = start;
    start = newnode;
}
void insert_end()
{
    struct node *newnode;
    struct node **ptr;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter value: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    ptr = &start;
    while (*ptr != NULL)
    {
        ptr = &((*ptr)->next);
    }
    *ptr = newnode;
}

void display()
{
    struct node *ptr;
    for (ptr = start; ptr != NULL; ptr = ptr->next)
    {
        printf("%d -> ", ptr->data);
    }
    printf("NULL");
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n\n1. Insert at Starting");
        printf("\n2. Display");
        printf("\n3. Insert at Ending");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                insert_start();
                break;
            case 2:
                display();
                break;
            case 3:
                insert_end();
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong choice");
        }
    }
    return 0;
}
