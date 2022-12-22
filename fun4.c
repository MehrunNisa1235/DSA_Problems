// c program for function with argument and with return value:- 
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,result; 
	printf("enter a and b values\n");
	scanf("%d%d",&a,&b); 
	result=sum(a,b);
	printf("the sum is = %d",result); 
}

int sum(int a,int b)
{
	return a+b; 
}
