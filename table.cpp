#include<iostream>
using namespace std;
int main()
{
    int n,i,j, mult;
    cout<<"Enter any positive Integer : ";
    cin>>n;
    cout<<"Enter value of i :";
    cin>>j;
    for(i=1; i<=j; i++)
    {
      mult=n*i;
      cout<<n<<"*"<<i<<"="<<mult;
      cout<<endl; 
    } 
    return 0;
}