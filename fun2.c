// c program for function without argument and with return value:- 
#include<stdio.h>
#include<conio.h>
void main()
{
	int result;
	result=sum(); 
	printf("sum is = %d",result);
}

int sum()
{
	int a,b;
	printf("enter a and b values\n");
	scanf("%d%d",&a,&b);
	return a+b; 
}
