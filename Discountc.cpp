#include<iostream>
using namespace std;
int main()
{
	int value;
	double purchase, discount, tax, total;
	cout<<"Enter The Purchase Amount : ";
	cin>>purchase;
	cout<<"If You are a Teacher Press 1 else Press 2."<<endl;
	cin>>value;
	if(value==1)
	{
		if(purchase>=100)
		{
			discount=purchase*0.12;
			tax=purchase*0.05;
			total=(purchase-(purchase*0.12))+(purchase*0.05);
		}
		cout<<"Your Discount is :"<<discount<<endl;
		cout<<"Your Tax is :"<<tax<<endl;
		cout<<"Your Total Payable Amount is : "<<total<<endl;
	}
	else
	{
	
		if(purchase>=100)
	{
		tax=purchase*0.05;
		total=purchase+(purchase*0.05);
		
	}
		cout<<"Your Tax is :"<<tax<<endl;
		cout<<"Your Total Payable Amount is : "<<total<<endl;
	}
}
