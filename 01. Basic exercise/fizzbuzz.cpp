#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter the last no");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d",i);
    
		if(i%3==0||i%9==0)
		{
			printf("fizz");
		}
		else if(i%5==0||i%10==0)
		{
			printf("buzz");
		}
	}
	  
	
        	
}
