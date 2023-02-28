#include<iostream>
using namespace std;
class point
{
	private:
		int x,y;
	public:
		point():x(0), y(0)
		{
			
		}
		void input()
		{
			cout<<"Enter Coordinates : ";
			cin>>x>>y;
		}
		void show()
		{
			cout<<x<<"  "<<y;
		}
		point add_point(point m, point n)
		{
			point temp;
			temp.x = m.x+n.x;
			temp.y = m.y+n.y;
			return temp;
		}
		
};
int main()
{
	point p1, p2;
	p1.input();
	p2.input();
	point p3 = p1.add_point(p1,p2);
	p3.show();
	
}
