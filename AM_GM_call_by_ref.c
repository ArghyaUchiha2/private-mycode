#include<stdio.h>
#include<math.h>
void amgm(float *x, float *y)
{
    float temp;
    temp=*x;
    *x=(*x+*y)/2.;
    *y=pow(*y*(temp),0.5);
}
int main()
{
    float a,b;
    printf("Enter the values of a and b:\n");
    scanf("%f%f",&a,&b);
    amgm(&a,&b);
    printf("AM=%.2f and GM=%.2f",a,b);
    return 0;
}