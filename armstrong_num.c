#include<math.h>
#include <stdio.h>
int numlength(int a)
{
    int l=0;
    while(a!=0){
        a/=10;
        l++;

    }
    return l;
}
int main()
{
    int n, s, t, r,p;
    printf("Enter the number:");
    scanf("%d", &n);
    p=numlength(n);
    t = n;
    while (t != 0)
    {
        r = t % 10;
        s = s  + pow(r,p);
        t /= 10;
    }
    if (s == n)
        printf("The number is an Armstrong number.");
    else
        printf("The number is not an Armstrong number.");
    return 0;
}