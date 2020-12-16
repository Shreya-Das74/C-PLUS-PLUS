#include<stdio.h>
int main() // O(n^2) --> worst case 
{
	int i,n,a[100],p,j, flag = 0;
	printf("Enter the sum no :: ");
	scanf("%d",&p);
	printf("Enter the range :: ");
	scanf("%d",&n);
	printf("Enter the elements :: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==p){
			 	flag = 1;
				break;	
			}
		}
	}
	flag == 1 ? 
			printf("\n found"):
					printf("\n not found !!");
					
	/* count = 0;
	if(count == 0){
		printf("\n it's zero'");
	} else{
		printf("\n it's not zero !!'")
	}
	
	count = 0;
	count == 0 ?
		 printf("\n it's zero ") :
		 	 printf("\n it's not zero "); */ 
}

 
 






