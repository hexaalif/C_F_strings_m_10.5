#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int find;
    scanf("%d", &find);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}