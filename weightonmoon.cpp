#include<iostream>
using namespace std;
int main()
{
	double Wm, We, G=9.81, Gm=1.6;  //Gm=1.6m/s //9.81m/s
	cout<<"Please Enter your weight (Kg) :";
	cin>>We;
	Wm=We*Gm/G;
	cout<<"Weight on Mood = "<<Wm <<"Kg";
	return 0; 
	
}
