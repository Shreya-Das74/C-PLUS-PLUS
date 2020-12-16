#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<5;i++)
	{ printf(" ");
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			printf(" 1 ");
			else
			printf("0");
		}
		printf("\n");
	}
}
