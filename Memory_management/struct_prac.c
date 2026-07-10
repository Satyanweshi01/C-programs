#include <stdio.h>
// tag/structure name
struct Student1{
    char* name1;
};

// anonymous structure with a variable
struct
{
    char* name2;
}Student2; // only one variable Student2 created

// no structure name but has alias name
typedef struct
{
    char* name3;
}Student3; // Student3 alias name

// Has both tag and alias name
typedef struct Student4 // tag name Student4 
{
    char* name4;
}Student4;// alias name Student4

int main(){
    struct Student1 s1 = {
        .name1 = "Prolay1"
    };
    Student2.name2 = "Prolay2";
    Student3 s3 = {
        .name3 = "Prolay3"
    };
    Student4 s4 = {
        .name4 = "Prolay4"
    };

    printf("%s\n",s1.name1);
    printf("%s\n",Student2.name2);
    printf("%s\n",s3.name3);
    printf("%s\n",s4.name4);
    return 0;
}