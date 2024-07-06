#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;
	cout<<"enter the value of c:";
	cin>>c;
	if(a>=b&&a>=c)
	{
		cout<<"greatest number is a";
	}
	else if(b>=a&&b>c)
	{
		cout<<"greatest number is b";
	}
	else
	{
		cout<<"gratest number is c";
	}
	return 0;
}
