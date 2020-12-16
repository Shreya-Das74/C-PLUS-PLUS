#include<stdio.h>
int sumofnatural(int num);
int main()
{
	int res=sumofnatural(10);
	printf("Result=%d",res);
	
}
  int sumofnatural(int num)
  {
  	if(num){
  		return(sumofnatural(num-1)+num);
	  }
	  return num;
  }
