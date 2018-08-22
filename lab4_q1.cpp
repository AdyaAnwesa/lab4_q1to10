#include<iostream>  //Including Library
using namespace std; //Taking standard defination

int main() { //Integer Function

float cm,m,km; //Declaring float type variables

	cout << "Enter length in centimeter " << endl;
	cin >> cm ; // Taking values from terminal 

	m= cm/100 ; km= cm/100000 ; //Defining values

	//Printing values in centimeter, meter, kilometer

	cout << "Length in centimeter is " << cm << " cm" << endl;	
	cout << "Length in meter is " << m << " m" << endl;
	cout << "Length in kilometer is " << km << " km" << endl;

return 1; //returning integer value to int main function
}
