#include<stdio.h>
#define RATE 6 
int main()
{
	int p;
	printf("Enter the amount");
	scanf("%d",&p);
	if(p==0)
	{
		return 0;
	}
	else
	{
		return (p*RATE)/100;
	}
	
}
