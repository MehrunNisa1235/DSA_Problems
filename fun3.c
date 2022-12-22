// c program for function with argument and without return value:- 
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	sum(a,b);
	sum(a,b); 
}
void sum(int a,int b)
{ 
    
	printf("the sum is =%d ",a+b); 
}
