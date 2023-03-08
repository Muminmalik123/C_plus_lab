#include<iostream>
using namespace std;
class demoverload
{
	public:
		int sum(int, int);
		float sum(float, float);
		string sum(string, string);
		
};
int demoverload::sum(int a, int b)
{
	return a+b;
}
float demoverload::sum(float a, float b)
{
	return a+b;
}
string demoverload::sum(string s1, string s2)
{
	return s1+s2;
}
int main()
{
	int x,y;
	string s1,s2;
	demoverload d;
	cout<<"Enter the value of x and y : ";
	cin>>x>>y;
	int p=d.sum(x,y);
	float q=d.sum(x,y);
	string s=d.sum(s1,s2);
	cout<<int(x,y)<<endl;
	cout<<float(x,y)<<endl;
	cout<<string(s1,s2)<<endl;
}
