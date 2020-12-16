#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n=0,a[10],t;
	printf("Enter the range");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
     for(i=0;i<n;i++)
     {
     	for(j=i+1;j<n;j++)
     	{  
     	    if(a[i]>a[j])
     	    { 
     	       t=a[i];
     	       a[i]=a[j];
     	       a[j]=t;
			 }
		 }
	 }
	   
	   for(i=0;i<n;i++)
	   {
	   	 printf("%d",a[i]);
	   	 
	   }
}
