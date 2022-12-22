#include<Stdio.h>
int main()
{
	int i,n,z,digit,sum=0,pro,count=0;
	printf("enter any number\n");
	scanf("%d",&n);
	z=n; 
    while(z>0) 
    {
       digit=z%10; 
       count=count+1; 
          z=z/10; 
    } 
   z=n;	
   while(z>0)
   {
      digit=z%10; 
     pro=1;
     for(int i=1;i<=count;i++)
     {
        pro=pro*digit; 
     }
       sum=sum+pro; 
        z=z/10; 
   } 
   if(sum==n)
   {
     printf("This is an Armstrong number");	
   } 
   else
   {
   	printf("This is not an Armstrong number"); 
   }
   
}