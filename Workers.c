#include <stdio.h>

int main()
{
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);
    int sum = (m1 * d) / m2;
    printf("%d", sum);
    return 0;
}