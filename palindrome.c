#include <stdio.h>
int main()
{
    int n, rn, t, r;
    printf("Enter the number:");
    scanf("%d", &n);
    t = n;
    while (t != 0)
    {
        r = t % 10;
        rn = rn * 10 + r;
        t /= 10;
    }
    if (rn == n)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");
    return 0;
}