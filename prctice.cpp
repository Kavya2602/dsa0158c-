#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"enter the first number:";
	cin>>n1;
	cout<<"ente rthe second number:";
	cin>>n2;
	int addition = n1+n2;
	int subtraction = n1-n2;
	int multipication = n1*n2;
	int division=0;
	int modulo=0;
	if(n2!=0)
	{
		division=n1/n2;
		modulo=n1%n2;
	}
	else
	{
		cout<<"zeros are not allowed:";
	}
	cout<<"addition"<<addition<<endl;
	cout<<"subtraction"<<subtraction<<endl;
	cout<<"multipication"<<multipication<<endl;
	if(n2!=0)
	{
		cout<<"division"<<division<<endl;
		cout<<"modulo"<<modulo<<endl;
	}
	return 0;
}
