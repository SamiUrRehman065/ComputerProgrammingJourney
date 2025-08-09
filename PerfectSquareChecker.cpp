#include <iostream>
#include <cmath>
using namespace std ;
int main() {
    while (true) {
    	int number;
        cout << "Enter a number you to check or if want to exit enter 13: ";
        cin>>number;
        if (number == 13) {
            cout << "Exiting the program. Goodbye!" <<endl;
            break;
        }

        int ps = sqrt(number);
        if (ps * ps == number) {
            cout << number << " is a perfect square." <<endl<<"and the square root of "<<number<<" is "<<ps<<endl;
        } else {
            cout << number << " is not a perfect square." <<endl;
        }
    }

    return 0;
}
