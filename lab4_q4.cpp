#include<iostream>  //Including Library
using namespace std; //Taking standard defination

int main() { //Integer Function

int days,y,m,n,d; //Declaring int type variables

	cout << "Enter number of days " << endl;
	cin >> days ; // Taking values from terminal 

	y= days/365 ; //calculating years
	n= days%365;
	m= n/30; //calculating months
	d= n%30; //calculating days

	//Printing values in centimeter, meter, kilometer

	cout << "Entered " << days << " days in standard form is " << y <<" years " << m << "  months and " << d << " days." << endl; 

return 4; //returning integer value to int main function
}
