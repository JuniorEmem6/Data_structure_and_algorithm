#include <stdio.h>
#include <stdlib.h>

struct person
{
    char *name;
    int id;
    struct person *next;
};

struct person *head = NULL;

void insertHead(char *name, int id);
void printElement();
int length();


int main(void)
{
    insertHead("Emem", 21);
    insertHead("Junior", 37);
    insertHead("Bassey", 03);
    insertHead("Chisom", 93);

    // printf("Your name is %s, id is %d and next is : %s\n", head->name, head->id, head->next->name);
    printElement();
    int result = length();

    printf("Total number of person is: %d\n", result);
}

void insertHead(char *name, int id)
{

    struct person *link = (struct person *)malloc(sizeof(struct person));

    link->id = id;
    link->name = name;

    link->next = head;

    head = link;
}

void printElement()
{
   struct person *ptr = head;

    while (ptr != NULL)
    {
        printf("Your name is: %s\n", ptr->name);
        ptr = ptr->next;
    }

    // printf("That is all at the moment\n");
}

int length()
{
    int count = 0;

    while (head != NULL)
    {
        count++;
        head = head->next;
    }

    return count;
    
}