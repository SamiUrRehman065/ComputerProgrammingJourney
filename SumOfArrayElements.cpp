#include<iostream>
using namespace std;

// Function to calculate the sum of an integer array
int sumofarray(int* array, int size){
	int sum;
	// Loop through each element of the array and add it to the sum
	for(int i=0; i<size; i++){
		sum+=array[i];
	}
	return sum; // Return the calculated sum
}

int main(){
   const int size = 10;
   int midTermMarks[size]={14, 9, 16, 12, 13, 14, 6, 11, 18, 10};
   // Display the mid-term marks of students	
   cout<<"Mid Term Marks of students :"<<endl;
	for(int i=0; i<size; i++){
		cout<<midTermMarks[i]<<" ";
	}	
	 // Call the function to calculate the sum of the array
	cout<<"\nThe total sum of the marks of the student is : "<<sumofarray(midTermMarks , size);
	return 0;
	
}
