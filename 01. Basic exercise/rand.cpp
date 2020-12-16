#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,x,c=0;
	x=5000;
	n= rand() %x;
	printf("%d",n);
	for(i=1;i<=x;i++)
	{
		if(n%i==0)
		c=c+1;
	}
	if(c==2)
	printf("Prime no");
	else
	printf("Not prime");
}
