#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0, j = 5; i <= 5; i++, j--)
    {
        printf("\n%d  %d", i, j);
    }
    return 0;
}