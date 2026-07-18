#ifndef STUDENT_H // this line tells the compiler if student.h not defined
#define STUDENT_H



typedef struct dob
{
    char* day;
    char* month;
    char* year;
} dob_s;

typedef struct Student
{
    char* name;
    dob_s dob; 
} student_s;
/*
assign_student here is the function which return a student_s structure, with name and date of birth.
*/
student_s assign_student(char* name,char* day, char* month, char* year);

/*
print_student prints the given student's info
*/
void print_student(student_s student);

#endif