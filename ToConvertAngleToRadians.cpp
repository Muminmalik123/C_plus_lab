
# include <iostream>
# include <math.h>
using namespace std; 
int main( ) 
{ 
	float angle, s, c, t ; 
	cout<<"Enter an angle : " <<endl;
 	cin>>angle;
 /* convert angle to radians */ 
 angle = angle * (3.14 / 180); 
 s = sin ( angle ) ; 
 c = cos ( angle ) ; 
 t = tan ( angle ) ; 
 cout<<"sin = "<<s <<endl <<"cos = "<<c <<endl <<"tan = "<<t <<endl; 
 return 0 ; 
 }
