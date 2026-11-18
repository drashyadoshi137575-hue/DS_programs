#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *start = NULL;

void insert_beginning() {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Value: ");
    scanf("%d", &newnode->data);
    newnode->next = start;
    start = newnode;
}

void insert_end() {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter Value: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (start == NULL) {
        start = newnode;
    } else {
        struct node *ptr = start;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }
}

void delete_first() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *ptr = start;
    start = start->next;
    free(ptr);
}

void delete_last() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    if (start->next == NULL) {
        free(start);
        start = NULL;
        return;
    }
    struct node *ptr = start, *prev = NULL;
    while (ptr->next != NULL) {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = NULL;
    free(ptr);
}

void display() {
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *ptr = start;
    while (ptr != NULL) {
        printf(" %d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void main() {
    int ch;
    while (1) {
        printf("\n MENU");
        printf("\n1. Insert at Beginning");
        printf("\n2. Insert at End");
        printf("\n3. Delete First");
        printf("\n4. Delete Last");
        printf("\n5. Display");
        printf("\n6. EXIT");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                insert_beginning();
                break;

            case 2:
                 insert_end();
                  break;

            case 3:
                 delete_first();
                  break;

            case 4:
                 delete_last();
                  break;

            case 5:
                 display();
                  break;

            case 6:
                 exit(0);

            default: printf("Wrong Choice\n");
        }
    }
    getch();
}
