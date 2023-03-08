#include<iostream>
using namespace std;

int sum(int x, int y)
{
	return x+y;
}
float sum(float x, float y)
{
	return x+y;
}
int main()
{
	int x, y;
	float p,q;
	cout<<"Enter the Value of x and y : ";
	cin>>x>>y;
	cout<<"Enter the Value of p and q :";
	cin>>p>>q;
	cout<<sum(x,y)<<endl;
	cout<<sum(p,q)<<endl;
	return 0;
	
}
