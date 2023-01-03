// write a program to input 1 student information name , roll , marks in 5 subject and
// display them using pointer to structure
#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[50];
    int roll;
    int marks[5];
} student;

void main()
{
    student s;
    printf("Enter name of student: ");
    fgets(s.name, 50, stdin);
    int len = strlen(s.name);
    if (s.name[len - 1] == '\n')
        s.name[len - 1] = '\0'; // Did this because fgets also includes the newline at the end
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter mark of %s in subject %d: ", s.name, i + 1);
        scanf("%d", &s.marks[i]);
    }
    struct student *ptr = &s;
    printf("\nDetails of Student: \n");
    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    for (int i = 0; i < 5; i++)
        printf("Mark in subject %d: %d\n", i + 1, ptr->marks[i]);
}