#include<iostream>  //Including Library
using namespace std; //Taking standard defination

int main() { //Integer Function

	float c,f ; //Declaring float type variables

	cout << "Enter temperature fahrenheit in " << endl; //Printing in terminal
	cin >> f; //Taking value from Terminal
	c= ((f-32)*5)/9; //calculating values

	//Printing results in Terminal
	cout << "Temperature in fahrenheit is " << f << " fahrenheit" << endl;
	cout << "Temperature in celcius is " << c << " celcius" << endl;

	
	return 3; //returning integer value to int main function
}
