#include <stdio.h>

void kth_smallest_element(int *arr, int kth);

int main(void)
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    kth_smallest_element(arr, 5);
}

void kth_smallest_element(int arr[], int k)
{
for (int a = 0; a < 6; a++)
{
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
    
        if (arr[a] > arr[i])
        {
            count++;
            continue;
        }

    }
    if (count == k - 1){
        printf("%d\n", arr[a]);
    }
}
}