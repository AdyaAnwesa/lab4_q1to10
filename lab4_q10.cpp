#include<iostream>  //Including Library
#include<math.h> //Library for power
using namespace std; //Taking standard defination

int main() { //Integer Function

	float p,t,r,ci,b,c,d,n,a; // Defining integer type variables
	cout << "Enter Pincipal, Time, Rate of Intrest and number of times intrest is compounded per year" << endl ;
	cin >> p; //Taking values from Terminal
	cin >> t;
	cin >> r;
	cin >> n;

	cout <<"Principal is " << p << " rupees" << ", " << "Time Period is " << t << " years" << ", Rate of Intrest is "<< r <<" % per annum" << " and Number of times intrest is compounded per year is " << n << " times." << endl; //Printing in terminal

	b=1+(r/n);
	c=n*t;
	d= pow(b,c);
	a= p*d; //Calculating total amount
	ci= a-p; //Calculating Compound Intrest
	
	//printing in terminal
	cout << "Compound Intrest is " << ci << " rupees" << endl;
	cout << " Total amount is " << a << " rupees" << endl;
 
	return 10; //returning integer value to int main function
}
