#include<iostream>
using namespace std;
class salary{
	private:
		float basicSalary;
		
	public:
		void input()
		{
			cout<<"Enter your basic Salary : ";
			cin>>basicSalary;
		}
	float calculateGross()
		{
			return(basicSalary*0.1)+(basicSalary*0.2)+basicSalary;
		}

};
int main()
{
	float x;
	salary s;
	s.input();
	x = s.calculateGross();
	cout<<"Gross Salary = "<<x;
	return 0;
}

