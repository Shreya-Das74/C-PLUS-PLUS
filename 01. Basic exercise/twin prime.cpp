#include<stdio.h>
int check_prime(int n);
int main()
{
	int start,end,i;
	printf("Enter start");
	scanf("%d",&start);
	printf("Enter end");
	scanf("%d",&end);
	for(i=start;i<end;i++)
	{
		if(check_prime(i)&&check_prime(i+2))
		{
			printf("%d %d \n",i,i+2);
			i=i+1;
		}
	}
}
int check_prime(int n)
{  
   int i;
	if(n==1)
	{
	   return 0;
	}
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
