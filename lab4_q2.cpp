#include<iostream>  //Including Library
using namespace std; //Taking standard defination

int main() { //Integer Function

	float c,f; //Declaring float type variables

	cout << "Enter temperature in celcius" << endl; //Printing in terminal
	cin >> c; //Taking value from Terminal
	f = 32 + ((9*c)/5); //calculating values

	//Printing results in Terminal
	cout << "Temperature in celcius is " << c << " celcius" << endl;
	cout << "Temperature in fahrenheit is " << f << " fahrenheit" << endl;

	return 2; //returning integer value to int main function
}
