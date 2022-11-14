#include<iostream>
using namespace std;
int main()
{
	float richter;
	cout<<"Enter the value of richter scale : ";
	cin>>richter;
	if(richter<5)
	{
		cout<<"Little or no Damage.";
	}
	else if(richter>=5.0 && richter <5.5)
	{
		cout<<"Some Damage.";
	}
	else if(richter>=5.5 && richter<6.5)
	{
		cout<<"Serious Damage.";
	}
	else if(richter>=6.5 && richter<7.5)
	{
		cout<<"Disaster!";
		
	}
	else if(richter>=7.5)
	{
		cout<<"Catastrophe!!";
	}
	return 0;
	
}
