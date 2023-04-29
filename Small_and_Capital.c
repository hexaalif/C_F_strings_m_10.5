#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int countB = 0;
    int countS = 0;
    int size = strlen(s);
    for (int i = 0; i < size; i++)
    {
        // printf("%s", s);
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            countB++;
        }
        else
        {
            countS++;
        }
    }
    printf("%d %d", countB, countS);
    return 0;
}