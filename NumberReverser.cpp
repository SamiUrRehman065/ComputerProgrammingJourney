#include<iostream>
using namespace std;

// Function to reverse the digits of a number
int reverse(int num){
    static int sum=0 ; // Variable to store the reversed number, initialized to 0
	int remainder;
	if(num!=0){
	 	remainder = num%10; // Extract the last digit of the number
		sum=sum*10+remainder; // Setting the reversed digits
		reverse(num/10); // Recursive call to process the remaining digits
	}
	return sum;
}

int main(){
	int num, rev;
	cout<<"Enter the number you want to reverse: ";
	cin>>num;
	rev = reverse(num);
	cout<<"The reverse of the "<<num<<" is : "<<rev;
	return 0;
}
