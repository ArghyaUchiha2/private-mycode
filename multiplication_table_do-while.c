#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the no:");
    scanf("%d", &n);
    printf("The multiplication table of %d is:", n);
    do
    {
        printf("\n%dx%d=%d", n, i, n * i);
        i = i + 1;

    } while (i <= 10);
    return 0;
}