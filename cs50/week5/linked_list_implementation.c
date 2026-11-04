#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node* next;
}node;

int main()
{
    node* list = NULL;
    int id;
    printf("Number of ids: ");
    scanf("%d", &id);
    for (int i = 0; i < id; i++)
    {
        node* n = malloc(sizeof(node));
        if (n == NULL)
        {
            while (list != NULL)
            {
                node* temp = list;
                list = list->next;
                free(temp);
            }
            return 1;
        }

        //(n*).number = i;
        int speci;
        printf("ID%d: ",i+1);
        scanf("%d",&speci);
        n->number = speci;
        n->next = list;
        list = n;
    }
    // Prints numbers
    node* ptr = list;
    while (ptr != NULL)
    {
        printf("%d\n", ptr -> number);
        node* temp_ptr = ptr;
        ptr = ptr->next;
        free(temp_ptr);
    }
    return 0;

}