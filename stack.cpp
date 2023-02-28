#include<iostream>
using namespace std;

class stack{
	private:
		int i[10], top;
		
		
		
	public:
		stack():
			top(-1)
			{
				
			}
		void push(int m)
		{
			
			top ++;
			i[top]=m;
			
		}
	int pop()
	{
		return i[top --];
	}
};
int main()
{
	stack s1;
		s1.push(1);
		s1.push(2);
		s1.push(3);
		s1.push(4);
		s1.push(5);
		s1.push(6);
		s1.push(7);
	
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	
}
