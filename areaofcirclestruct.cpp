#include<iostream>
using namespace std;
float circarea(float);
int main()
{
	float r;
	cout<<"Enter the Radius of the Circle : ";
	cin>>r;
	cout<<circarea(r);
}
float circarea(float r)
{
	float area;
	area = 3.14*r*r;
	return (area);
}
