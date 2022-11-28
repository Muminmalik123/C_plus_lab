#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Atomic Number : ";
	cin>>n;
	switch(n)
		{
			case 2:
				cout<<"The Gas is Helium."<<endl;
				break ;
			case 10:
				cout<<"The Gas is Neon."<<endl;
				break;
			case 18:
				cout<<"The Gas is Argon."<<endl;
				break;
			case 36:
				cout<<"the Noble Gas is Krypton."<<endl;
				break;
			case 54:
				cout<<"The Noble Gas is Xenon."<<endl;
				break;
			case 86:
				cout<<"The Noble Gas is Radon."<<endl;
				break;
			default:
				cout<<"Noble gas of such Atomic number does not exist!!";
							
		}
		return 0;
	
}
