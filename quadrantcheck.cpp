#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cout<<"Enter the value of x and y : ";
	cin>>x>>y;
	if(x==0 && y==0)
	{
		cout<<"(" <<x <<"," <<y <<")" <<"is on the origin.";
	}
	else if(x>0 || x<0 && y==0)
	{
		cout<<"(" <<x <<"," <<y <<")" <<"is on the x axis.";
	}
	else if(x==0 && y>0 || y<0)
	{
		cout<<"(" <<x <<"," <<y <<")" <<"is on y axis origin.";
	}
	else if(x>0 && y>0)
	{
		cout<<"(" <<x <<"," <<y <<")" <<"is in Quadrant 1.";
	}
	else if(x<0 && y>0)
	{
		cout<<"(" <<x <<"," <<y <<")" <<"is in Quadrant 2.";
	}
	else if(x<0 && y<0)
	{
		cout<<"(" <<x <<"," <<y <<")" <<"is in Quadrant 3.";
	}
	else if (x>0 && y<0)
	{
		cout<<"(" <<x <<"," <<y <<")" <<"is in Quadrant 4.";
	}
	return 0;
	
}
