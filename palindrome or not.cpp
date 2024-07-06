#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str, temp;
    int i,j;
	cout<<"enter the string:";
	cin>>str;
	temp=str;
	j=str.length()-1;
	while(i<j)
	{
		swap(str[i],str[j]);
		i++;
		j--;
	}
	if(temp==str)
	{
		cout<<"string is palindrome"<<endl;
	}
	else
	{
		cout<<"string is not palindrome:"<<endl;
	}
	return 0;
}
