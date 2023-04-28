#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxIn = 0, minIn = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[maxIn])
        {
            maxIn = i;
        }
        if (arr[i] < arr[minIn])
        {
            minIn = i;
        }
    }
    // printf("%d %d ", maxIn, minIn);
    int temp = arr[maxIn];
    arr[maxIn] = arr[minIn];
    arr[minIn] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}