#include<iostream>
using namespace std;
int fib(int);
int main()
{
	int i,n;
	cout<<"Enter the value of  n : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<fib(i) <<"\t";
	}
	
}
int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return fib (n-1) + fib(n-2);
}
