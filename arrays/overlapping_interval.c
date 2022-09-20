#include <stdio.h>

int main(void)
{
    int list[5][2] = {{1, 5}, {3, 7}, {4, 6}, {6, 8}};

    for (size_t i = 0; i < 5; i++)
    {
        printf("(%d, %d )", list[0][0], list[sizeof(list)][1]);
        break;
    }
    

    return 0;
}