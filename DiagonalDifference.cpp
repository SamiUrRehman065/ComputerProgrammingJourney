#include<iostream>
using namespace std;
const int size =100;
 int matrix(int arr[size][size], int rows , int cols ){
	 int digadd= 0 ;
	int antidigadd= 0;
	int difference ;
	for (int i =0 ; i<rows ; i++){
 		for (int j =0 ; j<cols ; j++){
			if (i == j ){
				digadd += arr[i][j]; 		
			}
			if (i+j == cols -1){
				antidigadd+=arr[i][j];		
			}
		}
	}
	difference = digadd - antidigadd;
	return difference;
 }
 int main(){
 	 cout<<"enter the rows and cols for array respectively: ";
	 int rows , cols;
	 cin>> rows >>cols;
 	int arr[size][size];
	 for (int i =0 ; i<rows ; i++){
 		for (int j =0 ; j<cols ; j++){
 			cout<<"Enter the value of ["<<i+1<<"]["<<j+1<<"] element of an array: ";
 			cin>>arr[i][j];
		}
	}
	 for (int i =0 ; i<rows ; i++){
 		for (int j =0 ; j<cols ; j++){
 			
 			cout<<arr[i][j]<<" ";
 		}
 		cout<<endl;
 	}
 	cout<<matrix(  arr, rows ,  cols );
 	return 0;
 }
