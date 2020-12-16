#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int f,n;
	printf("Enter a no");
	scanf("%d",&n);
	f=fact(n);
	printf("Fact=%d",f);
	
}
int fact(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return(n*fact(n-1));
}
