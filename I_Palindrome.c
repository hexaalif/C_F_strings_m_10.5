#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int i, c = 0;
    int n = strlen(s);
    for (i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
        {
            c++;
        }
    }
    // printf("%d\n", n);/
    if (c == i)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}