#include<stdio.h>
int main ()
{
	int n=0,m=1,t,sum,i;
	printf("Enter the no of terms of fibonacchi seq:");
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		sum=n+m;
		n=m;
		m=sum;
		printf("%d,",n);
	}
	return 0;
}