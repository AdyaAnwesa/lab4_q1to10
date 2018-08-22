#include<iostream>  //Including Library
using namespace std; //Taking standard defination

int main() { //Integer Function

	float p,t,r,si,a; // Defining integer type variables
	cout << "Enter Pincipal, Time, Rate of Intrest" << endl ;
	cin >> p; //Taking values from Terminal
	cin >> t;
	cin >> r;

	cout <<"Principal is " << p << " rupees" << ", " << "Time Period is " << t << " years" << " and Rate of Intrest is "<< r <<" % per annum" << endl; //Printing in terminal

	si= (p*t*r)/100; //Calculating Simple Intrest
	a= p+si; //Calculating total amount

	//printing in terminal
	cout << "Simple Intrest is " << si << " rupees" << endl;
	cout << " Total amount is " << a << " rupees" << endl;
 
	return 9; //returning integer value to int main function
}
