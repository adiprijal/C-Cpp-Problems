// Pass student details structure into a function and display the details

#include <stdio.h>

struct student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float averageMarks;
};


int displaystudentDetails(struct student st[], int size) {
    int i;
	for (i = 0; i < size; i++) {
        printf("\n");
        printf("Roll No: %d\n", st[i].rollNo);
        printf("Name: %s\n", st[i].name);
        printf("Address: %s\n", st[i].address);
        printf("Age: %d\n", st[i].age);
        printf("Average Marks: %.2f\n", st[i].averageMarks);
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student st[n];
    int i;

    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("\tRoll No: ");
        scanf("%d", &st[i].rollNo);
        printf("\tName: ");
        scanf(" %[^\n]", st[i].name);
        printf("\tAddress: ");
        scanf(" %[^\n]", st[i].address);
        printf("\tAge: ");
        scanf("%d", &st[i].age);
        printf("\tAverage Marks: ");
        scanf("%f", &st[i].averageMarks);
    }

    
    displaystudentDetails(st, n);

    return 0;
}

