#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	float a,b,c,sp,area;
    cout<<"Enter The Value Of Sides Of The Triangle : "<<endl;
	cin>>a>>b>>c;
	sp=(a+b+c)/2;
	area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
	cout<<"The Area Of Triangle Is :"<<area;
}
