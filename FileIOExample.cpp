#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream file("sample.txt");
	file<<"Hello this is sample file and i am using it you might seen changes "<<endl<<"and here i have some line breaks ";
	file.close();
	string st2;
	ifstream reading("sample.txt");

	while(getline(reading, st2)){
		cout<<st2;
		
	}

     reading.close();
	
}
