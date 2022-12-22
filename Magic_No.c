#include<stdio.h>
int main()
{
	int i,j,m,n,sum=0;
	printf("Enter any number u want\n");
	scanf("%d",&n); 
	for(i=n;i>9;i=sum)
	{
		sum=0;
		for(j=i;j>0;j=j/10)
		{   
		    
			m=j%10;
			sum=sum+m;
		}
	}
	if(sum==1)
	{
		printf("this is a magic number");
	}
	else
	{
		printf("this is not a magic number"); 
	}
}