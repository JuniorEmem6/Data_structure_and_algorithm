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
void insertTail(char *name, int id);
void deleteHead();
void deleteTail();
void insertAt(char *name, int id, int key);
void removeAt(int key);

int main(void)
{
    insertTail("Emeka", 03);
    insertHead("Emem", 21);
    insertTail("Chisom", 93);
    insertHead("Junior", 37);
    insertTail("Bassey", 03);
    insertHead("Bayo", 90);
    deleteHead();
    deleteTail();
    insertAt("Enoobong", 33, 3);
    removeAt(0);

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

void insertTail(char *name, int id)
{

    if (head == NULL)
    {
        insertHead(name, id);
    }
    else
    {

        struct person *link = (struct person *)malloc(sizeof(struct person));
        link->name = name;
        link->id = id;
        link->next = NULL;

        struct person *current = head;

        while (current->next != NULL)
        {
            current = current->next;
        }

        current->next = link;
    }
}

void deleteHead()
{
    if (head == NULL)
    {
        printf("No data in linkedlist");
    }
    else
    {
        head = head->next;
    }
}

void deleteTail()
{
    struct person *current = head;
    struct person *previous = head;
    while (current->next != NULL)
    {
        previous = current;
        current = current->next;
    }

    previous->next = NULL;
}

void insertAt(char *name, int id, int key)
{
    if (key == 0)
    {
        insertHead(name, id);
    }
    else
    {
        int count = 0;
        struct person *current = head;
        struct person *previous = (struct person *)malloc(sizeof(struct person));
        struct person *link = (struct person *)malloc(sizeof(struct person));

        link->name = name;
        link->id = id;
        link->next = NULL;

        while (count < key)
        {
            count++;
            previous = current;
            current = current->next;
        }

        previous->next = link;
        link->next = current;

        // free(previous);
        // free(link);
    }
}

void removeAt(int key)
{
    if (key == 0)
    {
        deleteHead();
    }
    else
    {
        int count = 0;
        struct person *current = head;
        struct person *previous = (struct person *)malloc(sizeof(struct person));

        while (count < key)
        {
            previous = current;
            count++;
            current = current->next;
        }

        previous->next = current->next;

    }
}