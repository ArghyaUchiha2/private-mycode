#include<stdio.h>
#define PI 3.14
#define sq(x) x*x
int main()
{
    int r=4;
    float var= PI;
    printf("The value of PI is: %f\n",var);
    printf("The area of the circle is: %f",PI*sq(r));
    return 0;
}