
// program to display or traverse of an array:- 

#include<stdio.h>
#include<conio.h>
int main()
{    
	int arr[10]={10,30,50,60,80,90,100};
	int i; 
	printf("Traversing operation of  Array elements are:- \n"); 
	for(i=0;i<7;i++)
	{
		printf("Array index of arr[%d] = %d\n",i,arr[i]); 
	}
	getch(); 
}
