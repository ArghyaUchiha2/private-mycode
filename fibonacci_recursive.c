#include <stdio.h>
int fiboterm(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fiboterm(n - 1) + fiboterm(n - 2);
}
/*char separation(int n)
{
    for(int i=1;i<=n;i+=1)
    {if(i<n)
    return ',';
    else if(i==n)
    return '.';
    }
}*/
int main()
{
    int num;
    printf("Enter the no of terms of the fibonacci seq:");
    scanf("%d", &num);
    for(int i=1;i<=num;i++)
    printf("%d,", fiboterm(i)/*,separation(n)*/);
    return 0;
}