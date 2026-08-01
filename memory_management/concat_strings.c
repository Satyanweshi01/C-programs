#include <stdio.h>

void concat(char* s1, char* s2);
int main()
{
    char s1[20] = "prolay";
    char* s2 = "mondal";
    concat(s1,s2);

    return 0;
}
void concat(char* s1, char* s2)
{
    int aro = 0;
    while(1){
        if (s1[aro] == '\0')
        {
            s1[aro] = ' ';
            aro++;
            break;
        }
        aro++;
    }
    int aro2 = 0;
    while(1)
    {
        s1[aro+aro2] = s2[aro2];
        
        if (s2[aro2] == '\0')
        {
            printf("%s\n",s1);
            break;
        }
        aro2++;
    }
}