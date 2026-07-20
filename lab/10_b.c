//Write a program to store data of 10 different books (book name, author name, publisher's name and price) and print the data of the books having price greater than 500
#include<stdio.h>

struct Book
{
    char book_name[50];
    char author_name[50];
    char publisher_name[50];
    int price;
};
#define BOOKNUM 10
int main()
{
    struct Book shelf[BOOKNUM];
    int i;
    for(i=0; i<BOOKNUM; i++)
    {
        printf("Book Name: ");
        fgets(shelf[i].book_name,50,stdin);    
        printf("Author's Name: ");
        fgets(shelf[i].author_name,50,stdin); 
        printf("Publisher's Name: ");
        fgets(shelf[i].publisher_name,50,stdin); 
        printf("Price: ");
        scanf("%d",&shelf[i].price);    
        getchar();    
    }
    printf("Books greater than 500 rs.:\n");
    for(i=0; i<BOOKNUM; i++)
    {
        if (shelf[i].price > 500)
        {
        printf("  Book Name: %s  ",shelf[i].book_name);  
        printf("Author's Name: %s  ",shelf[i].author_name); 
        printf("Publisher's Name: %s ",shelf[i].publisher_name); 
        printf("--------------------------------");
        }
    }
}