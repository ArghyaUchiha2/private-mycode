/*You manage a travel agency. You want n drivers to input their following details:
1. Name
2. Driver's license no.
3. Route
4. Kms travelled
Your program sould be able to take n as an input or use n=3 for sake of simplicity. 
Driviers sould be able to input their details one by one.

Your program should be able to print the details of the drivers with proper presentation.
*****Must use structures******/
#include<stdio.h>
int main()
{
    struct details
    {
        char name[30];
        char license[10];
        char route[30];
        int kms;
    };
    //int n,j,i;
    //printf("Enter the no of drivers:");
    //scanf("%d",&n);
    //for(int k=1;k<=n;k++)
        struct details d1,d2,d3;
        printf("1)Enter the name of the driver:");
        gets(d1.name);
        printf("Enter the driver's license no.:");
        gets(d1.license);
                printf("Enter the route of the driver:");
        gets(d1.route);
                printf("Kms travelled by the driver:");
        scanf("%d",&d1.kms);

        printf("\n2)Enter the name of the driver:");
        scanf("%s",d2.name);
        printf("Enter the driver's license no.:");
        scanf("%s",d2.license);
                printf("Enter the route of the driver:");
        scanf("%s",d2.license);
                printf("Kms travelled by the driver:");
        scanf("%d",&d2.kms);

        printf("\n3)Enter the name of the driver:");
        scanf("%s",d3.name);
        printf("Enter the driver's license no.:");
        scanf("%s",d3.license);
                printf("Enter the route of the driver:");
                scanf("%s",d3.route);
                printf("Kms travelled by the driver:");
        scanf("%d",&d3.kms);

    
        printf("********Drivers' details.********\n");
        
        printf("1)Name:%s\nLicense no.:%s\nRoute:%s\nKms travelled:%d\n\n",d1.name,d1.license,d1.route,d1.kms);
        printf("2)Name:%s\nLicense no.:%s\nRoute:%s\nKms travelled:%d\n\n",d2.name,d2.license,d2.route,d2.kms);
        printf("3)Name:%s\nLicense no.:%s\nRoute:%s\nKms travelled:%d\n\n",d3.name,d3.license,d3.route,d3.kms);
    
    
    return 0;
}