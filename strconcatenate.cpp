#include<iostream>
using namespace std;
string concatenate(string m, string n)
{
	return m+n;
}
int main()
{
	string a,b;
	cout<<"Enter the Value of string a :";
	cin>>a;
	cout<<"Enter the Value of string b : ";
	cin>>b;
	cout<<concatenate(a,b);
	return 0;
}
