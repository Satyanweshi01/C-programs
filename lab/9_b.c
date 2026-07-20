//Write a program that counts vowels, consonants, digits, special characters, and blank spaces, use a variety of test cases covering normal, edge, and special inputs.
#include <ctype.h>
#include <stdio.h>


int main()
{
    char string[50];
    int i, words = 0, blanks = 0, vowels = 0, consonants = 0, sp_char = 0, digits = 0;
    printf("Enter a sentence(upto 50 characters): ");
    fgets(string, 50, stdin);

    for (i = 0; string[i] != '\0'; i++)
    {
        
        if (isblank(string[i]))
        {
            words++;
            blanks++;
            continue;
        }
        if (isdigit(string[i]))
        {
            digits++;
            continue;
        }
        if ((ispunct(string[i]))&& (string[i] != '\n'))
        {
            sp_char++;
            continue;
        }
        if (isalpha(string[i]))
        {
            if ((toupper(string[i]) == 65) || (toupper(string[i]) == 69) || (toupper(string[i]) == 73) || (toupper(string[i]) == 79) || (toupper(string[i]) == 85))
            {
                vowels++;
                continue;
            }
            else
            {
                consonants++;
                continue;
            }
        }
    }
    printf("Vowels = %d\n",vowels);
    printf("Consonants = %d\n",consonants);
    printf("Digits = %d\n",digits);
    printf("Special Character = %d\n",sp_char);
    printf("Blank spaces = %d\n",blanks);
    printf("Words = %d\n",words);



    return 0;
}