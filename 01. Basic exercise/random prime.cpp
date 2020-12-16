#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{  
     int c=0,i=0,n=0;
     srand(time(0));
	 do
	 {
	 	n=rand();
	 	printf("%d \n",n);
	 }while(n>=50&&n<5000);
	 
	 
	
	 for(i=1;i<=n;i++)
	  {
	  	if(n%i==0)
	  	c=c+1;
	  }
	  if(c==2)
	  printf("Prime no=%d",n);
	  else
	  printf("Not prime ");
  
}
	  
	
  
