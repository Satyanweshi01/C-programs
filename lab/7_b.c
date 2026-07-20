//Write a function using pointers that deletes all occurrences of the given character in the string
#include<stdio.h>
#include<ctype.h>
//#include<conio.h>
void ch_deletion(char* string, char ch);
int main()
{
    //char string[] = "The brown fox jumped over the fence.\n";
    char string[50];
    printf("Enter a string: ");
    fgets(string, 50, stdin); // gets for older than c11
    char ch;
    //clrscr();
    //printf("%s",string);
    printf("Type the character you want to delete: ");
    scanf("%c",&ch);
    ch_deletion(string,ch);
    //getch();
    return 0;
}
void ch_deletion(char* string, char ch)
{
    int i = 0;
    while(string[i] != 0)
    {
        if (toupper(string[i]) == toupper(ch))
        {
            i++;
            continue;
        }
        printf("%c",string[i]);
        i++;
    }
}