// program to traverse the array with user input:- 
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],n,i; 
	printf("Enter The size of an Array Elements\n"); 
	scanf("%d",&n); 
	printf("Enter the elements\n"); 
	for(i=0;i<=n;i++) 
	scanf("%d",&arr[i]); 
	printf("Traversing operation of  Array elements are:- \n");  
	{   
	    for(i=0;i<=n;i++)
		printf("Array index of arr[%d] = %d\n",i,arr[i]);  
	} 
	getch();      
	 
	
	
}
