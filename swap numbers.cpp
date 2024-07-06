#include<iostream>
using namespace std;
int main()
{
	int a=1;
	int b=2;
	int temp;
	cout<<"before swapping a="<<a<<",b="<<b<<"\n";
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping a="<<a<<",b="<<b<<"\n";
	return 0;
}
