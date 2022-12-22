#include<stdio.h>
#include<conio.h>
int main()
{
	int i, num1,num2; 
	printf("enter the first number\n"); 
	scanf("%d",&num1); 
	printf("enter the second number\n"); 
	scanf("%d",&num2); 
	for(i=1;i<=num2;i++)
	{
		num1++; 
	} 
	printf("sum = %d ",num1); 
}
