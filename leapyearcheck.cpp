#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter The Year You Want To Check Whether Is A Leap Year Or Not : ";
	cin>>year;
	if(year%4==0)
	{
		cout<<"It Is A Leap Year.";
	}
	else
	{
		cout<<"Not A Leap Year!";
	}
	return 0;
}
