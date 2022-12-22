//c program to find print odd number in 1 to 20:- 
#include<stdio.h>
#include<conio.h>
int main()
{
	int i; 
	for(i=1;i<=20;i++)
	{
		if(i%2==1)		//if(i%2 !=0)
		{
			printf("%d\n",i); 
		}
	}
}
