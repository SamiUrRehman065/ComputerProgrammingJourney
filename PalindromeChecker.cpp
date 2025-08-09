#include<iostream>
using namespace std;

// Function to check if a given character array is a palindrome
bool isPalindrome(char* array, int lengthOfString){
// Loop through the first half of the string
	for(int i=0; i<(lengthOfString/2); i++){
		// Compare characters symmetrically around the center of the string
		if(array[i]!=array[lengthOfString-1-i]){
			return false; // Not a palindrome, return false
		}
	}
	return true; // Palindrome, return true
}

int main(){
	bool palindrome;
	int lengthOfString;
	char array[100];
	cout<<"Enter any string you want to check : ";
    cin>>array;
    // Calculate the length of the input string
	for(int i=0; array[i]!='\0'; i++){
		lengthOfString++;
	}	
	// Call the function to check if the string is a palindrom
	palindrome= isPalindrome(array, lengthOfString);
//	If function return true if statement will print otherwise else statement
	if(palindrome){
	cout<<"The given string "<<array<<" is a palindrome";
	}
	else{
	cout<<"The given string "<<array<<" is not a palindrome";
	}
	return 0;
}

	
