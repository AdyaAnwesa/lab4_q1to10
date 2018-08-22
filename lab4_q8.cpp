#include<iostream>  //Including Library
using namespace std; //Taking standard defination

int main() { //Integer Function

	int m1,m2,m3,m4,m5,t,a,p; // Defining integer type variables
	cout << "Enter marks of 5 subjects out of 100 " << endl ;
	cin >> m1; //Taking values from Terminal
	cin >> m2;
	cin >> m3;
	cin >> m4;
	cin >> m5;

	cout <<"Marks in 5 subjects are " << m1 << ", " << m2 << ", " <<m3 <<", " << m4 << " and " << m5 << endl; //Printing in terminal

	t=(m1+m2+m3+m4+m5); //Calculating total
	a=t/5; // Calculating average
	p=t/5; // Calculating Percentage
	
	cout << "Total marks obtained is " << t << endl;
	cout << "Average obtained is " << a << endl;
	cout << "Percentage obtained is " << p << " %" << endl;
 
	return 8; //returning integer value to int main function
}
