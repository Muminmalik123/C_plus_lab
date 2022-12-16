#include<iostream>
using namespace std;
int main()
{
    double dollars;
    cout<<"Enter amount in Dollars : ";
    cin>>dollars;
    cout<<"$"<<dollars<<"Equivalent to \nPound: "<<dollars/1.487 <<"\nFran: "<<dollars/0.172<<"\nDeutschemark: "<<dollars/0.584<<"\nYen: "<<dollars/0.00955<<endl;
    return 0;
}
