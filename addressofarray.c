#include<Stdio.h>
int main()
{
	int size;
	printf("enter the size of an arrays\n"); 
	scanf("%d",&size); 
	int arr[size],i; 
	printf("enter %d element in an array\n",size); 
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]); 
	}
	for(i=0;i<size;i++)
	{
		printf("address of index %d of array =%d\n",&arr[i]); 
	}
}
