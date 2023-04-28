#include <stdio.h>
#include <string.h>

int main()
{
    char A[11], B[11];
    scanf("%s", A);
    scanf("%s", B);
    // printf("%s", A);
    int szA = strlen(A);
    int szB = strlen(B);
    strcat(A, B);
    printf("%d %d\n", szA, szB);
    printf("%s\n", A);

    // char temp = A[0];
    // char temp2 = B[0];
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s", A, B);
    return 0;
}