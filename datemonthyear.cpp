#include<iostream>
using namespace std;
struct date{
    int day, month, year;

};
int main(){
    char temp;
    date d1;
    cout<<"Enter date (MM/DD/YYYY) : ";
    cin>>d1.month>>temp>>d1.day>>temp>>d1.year;


    cout<<endl<<"Date is :"<<d1.month<<"/"<<d1.day<<"/"<<d1.year<<endl;
return 0;
}