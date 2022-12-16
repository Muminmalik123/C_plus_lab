#include<iostream>
using namespace std;
int main()
{
    float celc,faren;
    cout<<"Enter a temperature in degree celsius(floating point number) : ";
    cin>>celc;
    faren=celc*(9/5)+32;
    cout<<"Temperature in Farenheit ="<<faren;

return 0;
}