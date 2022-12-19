#include<iostream>
using namespace std;
struct fraction{
    int num, den;
};
int main(){


    fraction p1,p2,p3;
    char temp, operation,ch;
    do
    {
    cout<<"Enter value of p1: ";
    cin>>p1.num>>temp>>p1.den;
    cout<<"Enter value of p2: ";
    cin>>p2.num>>temp>>p2.den;
    cout<<"Enter the operation you want to perform : ";
    cin>>operation;
        
         switch (operation)
     {
     case '+':
        p3.num = p1.num * p2.den + p1.den * p2.num;
        p3.den = p1.den * p2.den;

        cout<<p3.num<<"/"<<p3.den;
        break;
    case '-':
        p3.num = p1.num * p2.den - p1.den * p2.num;
        p3.den = p1.den * p2.den;

        cout<<p3.num<<"/"<<p3.den;
        break;
    case '*':
        p3.num = p1.num * p2.num;
        p3.den = p1.den * p2.den;

        cout<<p3.num<<"/"<<p3.den;
        break;
    case '/':
         p3.num = p1.num * p2.den;
         p3.den = p1.den * p2.num;
         cout<<"Division is  : "<<p3.num<<"/"<<p3.den<<endl;
        break;
     

     
     default:
        cout<<"Try again with valid inputs!";
        break;
     
    
    }
    cout<<"You want to continue : ";
    cin>>ch;
    }while(ch=='y');
return 0;
}