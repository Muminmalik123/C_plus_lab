#include<iostream.h>
using namespace std;
int main()
{
	double h,w;
	cout<<"Enter Your Height(m) and Weight(kg):";
	cin>>h>>w;
	double	BMI=w/(h*h);
	cout<<"Your BMI is : "<<BMI<<endl;
	if(BMI<=18.5)
	{
		cout<<"You Are Underweight.";
		
	}
	else if (BMI>=18.5 &&  BMI<=24.9 )
	{
		cout<<"You Are Normal.";
		
	}
	else if (BMI>=25 && BMI<=29.9)
	{
		cout<<"You Are Overweight.";
	}
	else if (BMI>=30)
	{
		cout<<"You Are Obese.";
	}
}
