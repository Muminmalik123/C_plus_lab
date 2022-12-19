#include<iostream>
using namespace std;
struct fractions
{
    int num, den;
};

int main(){

    fractions p1,p2,p3;
    char temp;
    cout<<"Enter value of p1:  ";
    cin>>p1.num>>temp>>p1.den;
    cout<<"Enter value of p2: ";
    cin>>p2.num>>temp>>p2.den;

    p3.num = p1.num * p2.den + p1.den * p2.num;
    p3.den = p1.den * p2.den;


    cout<<p3.num<<"/"<<p3.den;
return 0;
}