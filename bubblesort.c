 #include<stdio.h>
int main()
{
	int a[50]; 
	int i,j,n,temp; 
	printf("enter the size of an elements\n"); 
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++) 
	scanf("%d",&a[i]); 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1]) 
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp; 
			}
		}
	}  
	
	printf("The sorted output of bubble sort is\n"); 
	for(i=0;i<n;i++) 
	{
	printf("%d\n",a[i]); 
    }  
}
