#include<iostream>
using namespace std;
class sequence{

int size[10];
int number;

public:
void arr(){


int size[10]={1,2,3,4,5,6,7,8,9,10};

for(int i=0;i<10;i++){
    cout<<size[i]<<" ";
}
cout<<endl;
getinput();

}


public:
void getinput(){


int availbleseats = 10;
    cout<<"Enter number for booking seat"<<endl;
for(int k=0;k<2;k++){

cin>>number;


    if( number  == size[k]){
       size[k] =0;
    
availbleseats--;


}





}

cout<<"booked successfully!"<<endl;
 cout<<"Availble seats : "<<availbleseats<<endl;


}
 
};




int main(){


sequence seq;
seq.arr();


}