#include<iostream>
using namespace std;
int main()
{
	float costprice, sellingprice, profit, loss;
	cout<<"Enter The Cost Price Of The Product :";
	cin>>costprice;
	cout<<"Enter The Selling Price : ";
	cin>>sellingprice;
	profit=sellingprice-costprice;
	loss=costprice-sellingprice;
	if(sellingprice>costprice)
	{
		cout<<"Seller Is In The Profit Of "<<profit;
		
	}
	else
	{
		cout<<"Seller Is In Loss Of "<<loss;
	}
	
}
