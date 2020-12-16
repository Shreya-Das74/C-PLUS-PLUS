#include<iostream> 
using namespace std;
int main()
{
	int n,r,s=0,p;
	cout<<"Enter any no";
	cin>>n;
	p=n;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
	}
	if(s==p)
	{
		cout<<"Palindrome no";
	}
	else
	{
		cout<<"Not Palindrome no";
	}
	return 0;
	
}
