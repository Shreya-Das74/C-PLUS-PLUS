#include<iostream>
using namespace std;
int main()
{
	int x=1,y=2,n;
	cout<<"Enter the no";
	cin>>n;
	cout<<"Enter your choise";
	cin>>x>>y;
	switch(x);
	{
		case 3:
			{
				if(n==0)
				cout<<"It is zero";
				break;
				else
				cout<<"It is non zero";
			}
			switch(y);
			{
				case 4:
					{
						if(n%2==0)
						cout<<"Even";
						else
						cout<<"odd";
					}
				}
			
					}
			}
