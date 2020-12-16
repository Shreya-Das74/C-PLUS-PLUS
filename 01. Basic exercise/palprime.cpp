#include<stdio.h>
int pal(int);
int prime(int);
int main()
{
	int n;
	printf("Enter any no");
	scanf("%d",&n);	
	if(pal(n))
	{
	
		if(prime(n))
		{
			printf("\n palprime number ");
		}else
		{
			printf("\n not a palprime number ");
		}
	}
	else
	{
		printf("\n number is not palindrome");
	}
	
}
int pal(int n)
{ int r,s=0,p;
   p=n;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
	}
	if(s==p)
	return true;
	else
	return false;
}
 int prime(int n) 
{ int i,c;

	for(i=2;i<=n/2;i++)
	{

		if(n%i==0)
			return false;
	}
	return true;
}

 
 
// int prime(int n) { 10
// 	int i,c; 
// 	
// 	//for(i=1;i<=n;i++){
// 	//	if(n% i==0)
//// 	3	c++;
// 		
//	 }
//	 if(c==2)
//	 return true
//	 else
//	 return false
// }
