#include<iostream>
using namespace std;

// Function to sort an array of marks in ascending order
void sortMarks(int* marks , int size){
	// Outer loop for each pass
	for(int i=0; i<size; i++){
		// Inner loop for comparing and swapping elements
		for(int j=0; j<size-1; j++){
			// Compare adjacent elements, and swap if out of order
			if(marks[j]>marks[j+1]){
				int temp= marks[j];
				marks[j]=marks[j+1];
				marks[j+1]= temp;
			}
		}
	}
}
int main(){
	const int size = 10;
	int midTermMarks[size]={14, 9, 16, 12, 13, 14, 6, 11, 18, 10};
	cout<<"Original Mid Term Marks:"<<endl;
	for(int i=0; i<size; i++){
		cout<<midTermMarks[i]<<" ";
	}
	cout<<endl;
	// Call the function to sort the marks
	sortMarks(midTermMarks, size);
	cout<<"Sorted Mid Term Marks:"<<endl;
		for(int i=0; i<size; i++){
		cout<<midTermMarks[i]<<" ";
	}
	return 0;
}
