#include <stdio.h>

// Define a structure called Student
struct Student {
    char name[50];
    int age;
    float total_marks;
};

int main() {
    // Declare an array of type Student to store data for two students
    struct Student students[2];
    float total_marks_sum = 0;

    // Input data for two students
    for (int i = 0; i < 2; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Total Marks: ");
        scanf("%f", &students[i].total_marks);

        // Calculate the sum of total marks for finding the average later
        total_marks_sum += students[i].total_marks;
    }

    // Display information for two students
    printf("\nStudent Information:\n");
    for (int i = 0; i < 2; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Total Marks: %.2f\n", students[i].total_marks);
        printf("\n");
    }

    // Calculate and display the average of total marks
    float average_marks = total_marks_sum / 2;
    printf("Average Total Marks: %.2f\n", average_marks);

    return 0;
}

