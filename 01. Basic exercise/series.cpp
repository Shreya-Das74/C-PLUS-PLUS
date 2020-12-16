// (1+1)+(1+2)+(1+3)+(1+4)....(1+n)
//--> multiple pointer (O(n^2))
//--> single pointer (O(n))
// i -> 1-1 // j-> 1 -NUM (j++)

#include<stdio.h>
int main()
{
int i = 1, sum =0;
int j, num=5;

for(i=1;i<=1;i++){
	for(j=1; j<=num; j++){
		// first print --> fo check
		printf("%d +%d \n", i,j);
		sum = sum + i + j;
		printf("%d \n",sum);
	}
}
}
