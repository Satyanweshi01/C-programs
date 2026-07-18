#include <stdio.h>

#include "student.h"

student_s assign_student(char* name,char* day, char* month, char* year)
{   
    student_s s1 = {
        .name = name,
        .dob.day = day,
        .dob.month = month,
        .dob.year = year
    };
    return s1;
}

void print_student(student_s student)
{
    printf("Name: %s\n",student.name);
    printf("Date of Birth: %s/%s/%s\n",student.dob.day,student.dob.month,student.dob.year);
}