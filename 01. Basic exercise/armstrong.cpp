#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num,orgnum,r,n=0;
	float result=0.0;
	cout<<"Enter an integer";
	cin>>num;
	orgnum=num;
	for(orgnum=num;orgnum!=0;++n)
	{
		orgnum/=10;
	}
	for(orgnum=num;orgnum!=0;orgnum/=10)
	{
		r=orgnum%10;
		result+=pow(r,n);
	}
	if((int)result==num)
	cout<<"Armstrong";
	else
	cout<<"Not Armstrong";
	return 0;
}
