#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    char temp;
    cout<<"Enter first fraction : ";
    cin>>a>>temp>>b;
    cout<<"Enter second fraction :";
    cin>>c>>temp>>d;
    int num = (a*d)+(b*c);
    int den = (b*d);
    cout<<"The sum = "<<num<<"/"<<den;
    
    

return 0;
}