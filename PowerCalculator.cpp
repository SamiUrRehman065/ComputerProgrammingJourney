#include<iostream>
using namespace std;

// Function to calculate the power of a number with integer exponent
int power(int base, int exponent){
	if(exponent==0){
		return 1;  // Any number to the power of 0 is 1
	}
	else{
		return(base*power(base, exponent-1)); // Recursive case for positive exponents
	}
}
int main(){
	int base, exponent;
	double result;
	cout<<"Enter the base number : ";
	cin>>base;
	cout<<"Enter the exponent fo the given base "<<base<<" : ";
	cin>>exponent;
	// Calculate the power using the power function
	result = power(base , exponent);
	cout<<"The result of exponent "<<exponent<<" to the base "<<base<<" is : "<<result;
}
