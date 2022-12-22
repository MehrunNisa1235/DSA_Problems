#include<stdio.h> 
#include<conio.h> 
void Linear_Search(int arr[],int key,int size)
{
	int flag=0,i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("%d found at position=%d",key,i+1);
	}
	else
	{
		printf("element not found");
	}
}
int main()
{
	int size;
	printf("enter array size\n");
	scanf("%d",&size);
	int arr[size],i,key;
	printf("enter %d element in an array\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element do you want to search\n");
	scanf("%d",&key);
	Linear_Search(arr,key,size);
}
