#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], count = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            count++;
        }
        else
        {
            count2++;
        }
    }
    printf("%d %d", count, count2);

    return 0;
}