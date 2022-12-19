#include<iostream>
using namespace std;
struct time {
    int hour, minute, second;
};
int main(){

    time t1;
    char temp;
    cout<<"Enter time in format (HH:MM:SS): ";
    cin>>t1.hour>>temp>>t1.minute>>temp>>t1.second;

    int totalsec = t1.hour * 3600 + t1.minute * 60 + t1.second;
    cout<<"Total Seconds in "<<t1.hour<<":"<<t1.minute<<":"<<t1.second<<"\t"<<"are : "<<totalsec<<endl;  
    return 0;
}