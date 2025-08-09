#include<iostream>
using namespace std; 
// Function to check if a number is prime
// n: the number to be checked
// i: the current divisor by being checked
bool primechecker(int n , int i){
	// Base case: if i becomes 1, the number is prime
	if(i==1){
		return true;
	}
	// Base case: if i becomes 1, the number is prime
	if(n%i==0){
		return false; // If divisible, it's not a prime number
	}
	// Recursive call with the next divisor (i - 1)
	return primechecker(n , i-1);
}
int main(){
	int num ;
	cout<<"Enter the number you want to check : ";
	cin>>num;	
    // Calling the primechecker function and storing the result in isPrime
    bool isPrime = primechecker(num, num/2);
    // Checking the result and displaying the appropriate message
	if(isPrime){
		cout<<num<<" is a prime number.";
	}
	else{
		cout<<num<<" is not a prime number.";
	}
}
