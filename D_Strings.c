#include <stdio.h>
#include <string.h>

int main()
{
    char A[21], B[21], c[42];
    scanf("%s", A);
    scanf("%s", B);
    // printf("%s", A);
    strcpy(c, A);
    int szA = strlen(A);
    int szB = strlen(B);
    strcat(A, B);
    printf("%d %d\n", szA, szB);
    printf("%s\n", A);

    // char temp = A[0];
    // char temp2 = B[0];
    char temp = c[0];
    c[0] = B[0];
    B[0] = temp;
    printf("%s %s\n", c, B);
    // printf("%d", c);
    return 0;
}