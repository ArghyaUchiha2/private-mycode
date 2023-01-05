/* km to miles
inches to foot
cm to inches
pound to kg
inches to meter*/
#include<stdio.h>
int main()
{
    int n;
    float km2mi=0.621,in2ft=0.0833,cm2in=0.394,lbs2kg=0.454,in2m=0.025,m,c;
    printf(" Press 1 for km to miles.\nPress 2 for inches to foot.\nPress 3 for cm to inches.\nPress 4 for pound to kg.\nPress 5 for inches to meter.\nPress 0 to quit.\n");
    scanf("%d",&n);
    switch (n)
    {
    case 0:
        printf("Quiting the programme...");
        break;
    case 1:
    {
        printf("Enter km:");
        scanf("%f",&m);
        c= m*km2mi;
        printf("%.3fkm=%.3fmi",m,c);
        break;
    }
    case 2:
    {
        printf("Enter in:");
        scanf("%f",&m);
        c=m*in2ft;
        printf("%.3fin=%.3fft",m,c);
        break;
    }
    case 3:
    {
        printf("Enter cm:");
        scanf("%f",&m);
        c=m*cm2in;
        printf("%.3fcm=%.3fin",m,c);
        break;
    }
    case 4:
    {
        printf("Enter lbs:");
        scanf("%f",&m);
        c=m*lbs2kg;
        printf("%.3flbs=%.3fkg",m,c);
        break;
    }
    case 5:
    {
        printf("Enter in:");
        scanf("%f",&m);
        c=m*in2m;
        printf("%.3fin=%.3fmi",m,c);
        break;
    }
    
    default:
        break;
    }
    return 0;
}