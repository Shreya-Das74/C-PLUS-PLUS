#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter an integer no") ;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		sum=sum+i;
	}
	printf("Sum is=%d",sum);
	
}

