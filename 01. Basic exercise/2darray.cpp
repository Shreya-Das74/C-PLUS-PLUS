#include<stdio.h>
int main()
  {
  	int a[5][5], r,c,i,j;
  	printf("Enter the range of row");
  	scanf("%d",&r);
  	printf(" Enter the range of column");
  	scanf("%d",&c);
  	printf("Enter the elements");
  	for(i=0;i<r;i++)
  	{
	  for(j=0;j<c;j++)
  	  { scanf("%d",&a[i][j]);
  	
	  }
  		
	  }
	  for(i=0;i<r;i++)
	  { 
	     for(j=0;j<c;j++)
	     {  
	         printf("%d",a[i][j]);
	         
		 }
	  }
	  return 0;
  }
