#include<iostream>  //Including Library
#include<math.h> //Library for square root 
using namespace std; //Taking standard defination

int main() { //Integer Function

	float s,b,c,a; // Defining float type variables
	cout << "Enter side of the triangle in meters " << endl ;
	cin >> s; //Taking values from Terminal

	cout <<"Side of triangle is " << s << " m" << endl;
 
	b= sqrt(3);
	c= pow(s,2);
	a= (b*c)/4; //Calculating area
	
	cout << "Area of triangle is " << a << " m^2" << endl; //printing value in terminal
 
	return 7; //returning integer value to int main function
}
