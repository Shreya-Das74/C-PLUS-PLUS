#include<iostream>
using namespace std;
int div(int,int);
int main()
{
	int a,b,d;
	cout<<"Enter two no";
	cin>>a>>b;
	d=div(a,b);
	cout<<"division="<<d;
	
}
int div(int a,int b)
{
	int d;
	d=a/b;
	return d;
}
