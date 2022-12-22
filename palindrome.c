#include<Stdio.h>
int main()
{
	int i,n,temp,rem,rev=0;
	printf("Enter any number\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
	  rem=n%10;
	  n=n/10;
	  rev=rev*10+rem;
	   	
	} 
	if(temp==rev)
	{
		printf("this is a palindrome number");
	}
	else
	{
		printf("this is not a palindrome nubmer"); 
	}
}