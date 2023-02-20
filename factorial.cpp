#include<iostream>
using namespace std;
class factorial{
	private:
		int x;
		
	public:
		void input()
		{
			cout<<"Enter any positive integer : ";
			cin>>x;
		}
		void calculate()
		{
			int factorial =1;
			for(int i=2; i<=x; i++){
				factorial *=i;
			} 
			cout<<"Factorial = "<<factorial;
		}

};
int main()
{
	factorial f;
	f.input();
	f.calculate();
	return 0;
}

