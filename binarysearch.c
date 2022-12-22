#include<stdio.h> 
#include<conio.h>
int Binary_Search(int arr[],int key,int high)
{
	int low=0,mid;
	while(low<high)
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}		 
	}
	    	return -1;
}
int main()
{
	int size;
	printf("enter array size\n");
	scanf("%d",&size);
	int arr[size],i,num;
	printf("enter %d element in an array in sorted order\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter number do you want to search\n");
	scanf("%d",&num);
	int val=Binary_Search(arr,num,size);
	if(val==-1)
	{
	printf("element not found in given array\n");
	}
	else 
	{
	printf("element found at postion %d",val+1); 
	}
}     
