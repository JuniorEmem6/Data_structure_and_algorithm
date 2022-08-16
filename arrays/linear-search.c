// C code implementing linear search algorithm
#include <stdio.h>
#include <stdlib.h>

int linear_search(char *lang[], char *value)
{
    int i;
    for (i = 0; i < sizeof(*lang); i++)
        if (lang[i] == value)
            return i;

    return -1;
}

int main(void)
{

    char *languages[] = {"C", "Golang", "Javascript", "Assembly", "Python", "Swift", "Kotlin"};

    // Value to search for
    char *value = "Kotli";
    int result = linear_search(languages, value);

    if (result == -1)
        printf("Value not in list\n");
    else
        printf("%s found at index %d\n", value, result);

    return EXIT_SUCCESS;
}