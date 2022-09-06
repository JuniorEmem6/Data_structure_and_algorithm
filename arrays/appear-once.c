// C code to Find the element that appears once in an array where every other element appears twice

#include <stdio.h>

int appearOnce(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int k = 0; k < size; k++)
        {
            if (array[i] == array[k])
            {
                count++;
            }
        }

        if (count == 1)
        {
            return array[i];
        }
    }
}

int main(void)
{
    int numbers[] = {4, 3, 5, 4, 5, 3, 2};
    int size = sizeof(numbers) / sizeof(numbers[9]);

    int result = appearOnce(numbers, size);
    printf("%d\n", result);

    return 0;
}