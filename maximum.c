// c program to find largest element in array:- 

#include<stdio.h>
int main()
{
	int a[10]={10,30,20,60,33};
	int i,max=a[0]; 
	int min=a[0]; 
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		} 
		if(a[i]<min)
		{
			min=a[i];
		} 
		
	} 
	printf("largest number=%d\n ",max); 
	printf("smallest number=%d\n ",min); 
}
