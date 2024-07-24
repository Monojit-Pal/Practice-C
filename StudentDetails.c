//Write a program in C to create an array of structure type. Define the structure student with members name, roll, marks.
//Write 2 functions: 1. to take input into each element of the array. 2. to display the individual elements of the array using pointers.

#include<stdio.h>
#include<stdlib.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

void input(struct Student *ptr, int n);
void display(struct Student *ptr, int n);

int main() {
    struct Student s[100];
    struct Student *ptr = s;

    int ch, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    while (1) {
        printf("Enter 1 to input details, 2 to display details, and 3 to exit: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                input(ptr, n);
                break;
            case 2:
                display(ptr, n);
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Invalid Input\n");
                break;
        }
    }

    return 0;
}

void input(struct Student *ptr, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", (ptr + i)->name);
        printf("Enter roll: ");
        scanf("%d", &(ptr + i)->roll);
        printf("Enter marks: ");
        scanf("%f", &(ptr + i)->marks);
    }
}

void display(struct Student *ptr, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nDetails of Student %d\n", i + 1);
        printf("Name: %s\n", (ptr + i)->name);
        printf("Roll: %d\n", (ptr + i)->roll);
        printf("Marks: %.2f\n", (ptr + i)->marks);
    }
}