#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the no for multiplication table:");
	scanf("%d",&n);
	printf("The req multiplication table is:\n");
	for(i=1;i<=10;i++)
	{
		printf("%dx%d=%d\n",n,i,n*i);
	}
	return 0;
}