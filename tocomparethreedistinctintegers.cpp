
//to compare three distinct integers
#include<iostream>
using namespace std;
int main ()
{
	int a, b, c ;
	cout<<"Enter three distinct Integers : ";
	cin>>a>>b>>c;
	if (a>b && a>c)
     {
	  cout<<a <<" is greatest" ;
	 }
	else if (b>c && b>a)
	{
	  cout<<b <<" is greatest" ;
	}
	else if(c>a && c>b)
	{ 
	  cout<<c <<" is greatest" ;
	}
	
	return 0;
}
