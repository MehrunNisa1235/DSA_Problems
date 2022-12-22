#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter any number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	{
		printf("this is a perfect number");
	}
	else
	{
		printf("this is not a perfect number"); 
	}
}