#include<stdio.h>
int comp(int a,int b);
float avg(int c,int d,int f,int g)
{
    return (c+d+f+g)/4.;
}
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}
int main()
{
    int a,b,c;
    float d;
    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
        d=avg(a,b,12,14);
    printf("%f\n",d);
    d=avg(2,5,3,8);
    printf("%f\n",d);
    printstar(7);
   // c=comp(a,b);
   // printf("%d",c);

    return 0;

}
int comp(int a,int b)
{
    return a+b+a*b;
}