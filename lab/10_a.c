//Write a program to create a Progress Report of class with 50 students and the required field will be roll of student, name of student, marks of three subjects, total marks, average marks, and the grade
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int marks[3];
    int total;
    float average;
    char grade;
};
#define STU_COUNT 50
int main()
{
    struct Student student_list[STU_COUNT];    
    int i,total_marks, avg_marks;
    char grade;
    for(i=0; i<STU_COUNT; i++)
    {
        printf("The details of student %d\n",i+1);
        printf("Roll no:");
        scanf("%d",&student_list[i].roll);
        printf("Name:");
        scanf("%s",&student_list[i].name);
        printf("Marks of the 3 subjects:");
        scanf("%d %d %d",&student_list[i].marks[0],&student_list[i].marks[1],&student_list[i].marks[2]);
        total_marks = student_list[i].marks[0]+student_list[i].marks[1]+student_list[i].marks[2];
        avg_marks = (float)total_marks/3;
        student_list[i].total = total_marks;
        student_list[i].average = avg_marks;
        if (avg_marks >= 90)
        {
            grade = 'A';
        }
        else if (avg_marks >= 80)
        {
        grade = 'B';
        }
        else if (avg_marks >= 70)
        {
        grade = 'C';
        }
        else if (avg_marks >= 60)
        {
        grade = 'D';
        }
        else
        {
        grade = 'F';
        }
        student_list[i].grade = grade;
    }
    printf("The Progress Report:\n");
    printf("Roll | Name | Sub1 | Sub2 | Sub3 | Total | Average | Grade\n");
    for(i=0; i<STU_COUNT; i++)
    {
        printf("%d | ",student_list[i].roll);
        printf("%s | ",student_list[i].name);
        printf("%d | ",student_list[i].marks[0]);
        printf("%d | ",student_list[i].marks[1]);
        printf("%d | ",student_list[i].marks[2]);
        printf("%d | ",student_list[i].total);
        printf("%f | ",student_list[i].average);
        printf("%c |\n ",student_list[i].grade);
    }

    return 0;
}