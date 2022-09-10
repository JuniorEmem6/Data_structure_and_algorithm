#include <stdio.h>

int majorityElement(int array[], int size)
{
    const int half_size = size / 2;

    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (size_t j = 0; j < size; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }

        if (count > half_size)
        {
            return array[i];
        }
    }

    return -1;
}

int main(void)
{
    int number[9] = {4, 3, 4, 2, 4, 4, 2, 1, 4};
    int size = sizeof(number) / sizeof(number[0]);

    int result = majorityElement(number, size);
    printf("%d\n", result);
}
