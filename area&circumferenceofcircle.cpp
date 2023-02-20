#include<iostream>
using namespace std;
class circle{
	private:
		float radius;
		
	public:
		void getRadius()
		{
			cout<<"Enter the radius of the Circle : ";
			cin>>radius;
		}
	float calculateCircumf()
		{
			return 2*3.14*radius; 
		}
	float calculateArea()
	{
			return 3.14*radius*radius;		
	}

};
int main()
{
	circle c;
	c.getRadius();
	cout<<"Circumference of the Circle = "<<c.calculateCircumf()<<endl;
	c.calculateCircumf();
	cout<<"Area of the Circle = "<<c.calculateArea()<<endl;
	return 0;
}

