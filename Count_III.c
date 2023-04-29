#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int count[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 97;
        count[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        // int value = s[i] - 97;
        printf("%c - %d\n", i + 97, count[i]);
        // if (count[i] != 0)
        // {
        //     printf("%c - %d\n", i + 97, count[i]);
        // }
    }
    return 0;
}