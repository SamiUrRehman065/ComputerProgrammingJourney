#include<iostream>
using namespace std;

//Declaring constants here

const int Rows = 12;
const int Cols = 7;
const int FIRST_CLASS_ROWS = 2;
const int ECONOMY_CLASS_ROWS = 8;
const int BUSINESS_CLASS_ROWS = 2;
const int FIRST_CLASS_FARE = 18000;
const int ECONOMY_CLASS_FARE = 14000;
const int BUSINESS_CLASS_FARE = 10000;

// Declare Seats as a global variable so that can use in every function 
int Seats[Rows][Cols] = {0}; // Initialize all seats as available (0)
int bookedFirstClassSeats = 0; // this Variable to keep track of booked seats in First Class seats
int bookedBusinessClassSeats = 0; // this Variable to keep track of booked seats in Business Class seats
int bookedEconomyClassSeats = 0; // this Variable to keep track of booked seats in Economy Class seats

//Declaring functions prototypes

void display_menu();
void view_seating_plan(int Seats[][Cols]);
void get_fare();
int  check_available_seats(int Seats[][Cols]);
bool book_seats(int no_of_seats, int classFare, int& booked_seats_counter, int classLimit);
bool book_first_class(int Seats[][Cols], int no_of_seats );
bool book_business_class(int Seats[][Cols], int no_of_seats);
bool book_economy_class(int Seats[][Cols], int no_of_seats);
bool system_reset(int Seats[][Cols]);

//After declaring functions and constants we are moving toward main function 

int main(){
//varible for user choice and no of seats they want to book
int choice , no_of_seats ;
do{
	display_menu();
	cout<<"Enter your choice : ";
	cin>>choice;
//	 using switch case for different options from 1 to 7
     switch(choice){
     	case 1:
     		cout<<"Enter the no of seats you want to book in first class: ";
     		cin>>no_of_seats;
     		 book_first_class(Seats, no_of_seats );
     		break;
     	case 2:
     		cout<<"Enter the no of seats you want to book in business class: ";
     		cin>>no_of_seats;
     		 book_business_class(Seats , no_of_seats );
     		break;
     	case 3:
     		cout<<"Enter the no of seats you want to book in economy class: ";
     		cin>>no_of_seats;
     		 book_economy_class(Seats ,no_of_seats );
     		break;
		case 4:
		    view_seating_plan(Seats);
			break;
		case 5:
		    get_fare();
			break;
		case 6:
		    system_reset(Seats);
			break;	
		case 7:
		    cout<<"Thank you for you using our system ."<<endl<<"Existing from booking system ."<<endl;
			break;	
		default:
		    cout<<"Invalid choice please try again with right choice given above . "<<endl;			 	
	 }
//	It will run until user enter 7 to exist
} while(choice !=7 );

return 0;
}

//Functions definition goes here

//displaying main menu
void display_menu(){
	cout<<"---------------------------------------------------"<<endl;
	cout<<"      Welcome to Airplane Reservation System. "<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"1. Book First Class Seats . "<<endl;
	cout<<"2. Book Business Class Seats . "<<endl;
	cout<<"3. Book Economy Class Seats . "<<endl;
	cout<<"4. View Airplane Seating Plan . "<<endl;
	cout<<"5. View Fares ."<<endl;
	cout<<"6. System Reset . "<<endl;
	cout<<"7. Exit from The Booking System . "<<endl;
	
}
//displaying the seating plan of airplane
void view_seating_plan(int Seats[][Cols]){
	cout<<"Seating plan for airplane "<<endl;
	for(int i=0; i<Rows; i++){
		for(int j=0; j<Cols; j++){
			cout<<Seats[i][j]<<" ";
		}
		cout<<endl;
	}
}

//here i am gonna actual work booking seat for different classes in one function and 
//one thing that i am gonna pass a parameter with reference to keep track pf booked seats 

//function to book seats
bool book_seats(int no_of_seats, int classFare, int& booked_seats_counter, int classLimit){
	int available_seats=0;
	for(int i=0; i<Rows; i++){
		for(int j=0; j<Cols; j++){
			if(Seats[i][j]==0){
				++available_seats;
				Seats[i][j]=1;
				booked_seats_counter++;
				if(available_seats == no_of_seats){
//					 here below I am using this to keep track 
					
					cout<< "Seats Booked Successfully :  "<<endl;
					cout<<"total Fare RS: "<< no_of_seats*classFare<<endl;
					return true;	
				}
			}
		}
	}
	cout<<"Not Enough Space To Book Your Seats Sorry: "<<endl;
	return false;
}

//other function will gona simple bcz my aim is to keep less calculation and dont repeat code for every function so I have
//this code implimented on all function just changing the value of paramenters to calculations 

//defining first class 
bool book_first_class(int Seats[][Cols], int no_of_seats ){
//	here i am gonna apply condition to check either seats are exceed to limit or not for first class 
   if(bookedFirstClassSeats+no_of_seats > FIRST_CLASS_ROWS*Cols ){
   	  int remainingSeats = FIRST_CLASS_ROWS * Cols - bookedFirstClassSeats;
   	cout<<"Not Enough Seats Available For First Class You Can Only Book  "<<remainingSeats<<" Seats Now"<<endl ;
   	return false;
   }
//	 now if seats available we are gonna call function bookseats with first class parameters
    return book_seats(no_of_seats, FIRST_CLASS_FARE, bookedFirstClassSeats , FIRST_CLASS_ROWS*Cols);
	
}
 
// defining business class
bool book_business_class(int Seats[][Cols], int no_of_seats){
	//	here i am gonna apply condition to check either seats are exceed to limit or not for business class 
	if(bookedBusinessClassSeats+no_of_seats >BUSINESS_CLASS_ROWS*Cols ){
		int remainingSeats = BUSINESS_CLASS_ROWS * Cols - bookedBusinessClassSeats;
		cout<<"Not Enough Seats Available For Business Class You Can Only Book  "<<remainingSeats<<" Seats Now"<<endl;
		return false;
	}
	//	 now if seats available we are gonna call function bookseats with business class parameters
	return book_seats(no_of_seats, BUSINESS_CLASS_FARE, bookedBusinessClassSeats , BUSINESS_CLASS_ROWS*Cols);
}

//defining economy class
bool book_economy_class(int Seats[][Cols], int no_of_seats){
	//	here i am gonna apply condition to check either seats are exceed to limit or not for economy class 
	if(bookedEconomyClassSeats+no_of_seats> ECONOMY_CLASS_ROWS*Cols){
		int remainingSeats = ECONOMY_CLASS_ROWS * Cols - bookedEconomyClassSeats;
		cout<<"Not Enough Seats Available For Economy Class You Can Only Book  "<<remainingSeats<<" Seats Now"<<endl;
		return false;
	}
		//	 now if seats available we are gonna call function bookseats with economy class parameters
		return book_seats(no_of_seats, ECONOMY_CLASS_FARE, bookedEconomyClassSeats , ECONOMY_CLASS_ROWS*Cols);
}

//definning the check avialable seats function 

int checkAvailableSeats() {
    int availableSeats = 0;
    for (int i = 0; i < Rows; ++i) {
        for (int j = 0; j < Cols; ++j) {
            if (Seats[i][j] == 0) {
                ++availableSeats;
            }
        }
    }
    return availableSeats;
}

//definning the get fare function 
void get_fare() {
    cout << "Fares:\n";
    cout << "1. First Class: Rs. " << FIRST_CLASS_FARE << endl;
    cout << "2. Business Class: Rs. " << BUSINESS_CLASS_FARE << endl;
    cout << "3. Economy Class: Rs. " << ECONOMY_CLASS_FARE << endl;
}

//definning the system reset function 
 bool system_reset(int Seats[][Cols]){
    for (int i = 0; i < Rows; ++i) {
        for (int j = 0; j < Cols; ++j) {
            Seats[i][j] = 0;
        }
    }
    bookedFirstClassSeats = 0; // Reset the booked seats counter for First Class
    bookedBusinessClassSeats = 0; // Reset the booked seats counter for Business Class
    bookedEconomyClassSeats = 0; // Reset the booked seats counter for Economy Class
    cout << "System reset successfully!"<<endl;
    return true;
}

//here we end up our programm









