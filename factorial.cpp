#include<iostream>
using namespace std;
int main()
{
	int i, j=1;
	int number;
	cout<<"Enter a number : ";
	cin>>number;
	  for(i=1; i<=number; i++)
       {
       	j=j*i;
	   }
	   cout<<"Factorial of given number is : "<<j;
	   return 0; 
}
