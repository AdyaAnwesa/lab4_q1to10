#include<iostream>  //Including Library
using namespace std; //Taking standard defination

int main() { //Integer Function

	int a1,a2,a3; // Declaring int values
	cout << "Enter 2 angles of the triangle " << endl;
	cin >> a1; // Defining the variables
	cin >> a2;
	a3= (180-(a1+a2)); //Calculating the 3 angle
	cout << "The 3 angles of a triangle are " << a1 << ", " << a2 << ", " << a3 << endl; 
	//printing values in terminal

return 5; //returning integer value to int main function
}
