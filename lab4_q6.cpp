#include<iostream>  //Including Library
using namespace std; //Taking standard defination

int main() { //Integer Function

	int b,h,a; // Defining integer type variables
	cout << "Enter base and height of the triangle in meters " << endl ;
	cin >> b; //Taking values from Terminal
	cin >> h;

	cout <<"Base of triangle is " << b << " m" << endl;
	cout << "Height of triangle is " << h << " m" << endl;
 
	a= (b*h)/2 ; //Calculating area
	
	cout << "Area of triangle is " << a << " m^2" << endl;
 
	return 6; //returning integer value to int main function
}
