#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10

int queue[MAX];
int front = -1, rear = -1;

void insert()
{
    int val;
    if (rear == MAX - 1) {
        printf("\nQueue Overflow!");
    }
    else {
        printf("Enter element to insert : ");
        scanf("%d", &val);
        if (front == -1) front = 0;
        queue[++rear] = val;
        printf("Inserted Successfully.\n");
    }
}

void delete() {
    if (front == -1 || front > rear) {
        printf("\nQueue Underflow!");
    } else {
        printf("Deleted element is : %d\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty.");
    } else {
        printf("\nQueue elements are : \n");
        for (int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

void main() {
    int choice;

    while (1) {
        printf("Queue :\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("\nEnter your choice : \n");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            insert();
            break;

        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exit.\n");
            break;
        }
    }
    getch();
}

