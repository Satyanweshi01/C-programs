#include <stdio.h>
#include <stdlib.h> // for DMA
typedef union any_type
{
    int u_int;
    float u_float;
    char u_char;
} any_type;
typedef struct node
{
    any_type data;
    struct node* pointer;
}node;

int main()
{
    node* list = NULL;
    int ids;
    printf("No of ids:");
    scanf("%d",&ids);
    for(int i = 0; i<n ; i++)
    {
        node* n1 = malloc(sizeof(node)); // data allocated
        if (n1 == NULL) {return 1;}
        printf("ID%d: ",i+1);
        

    }
    

    return 0;
}
