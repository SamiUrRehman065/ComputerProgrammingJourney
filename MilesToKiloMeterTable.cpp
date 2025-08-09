#include <iostream>
#include <iomanip> // For setting precision
using namespace std;
int main() {
    const double milesToKilometers = 1.60934;
    
    cout << "Miles   Kilometers" << endl;
    
    for (int miles = 10; miles <= 80; miles += 10) {
        double kilometers = miles * milesToKilometers;
        
        // Display the table with two decimal places for kilometers
        cout << fixed <<setprecision(2) << miles << "   " << kilometers << endl;
    }

    return 0;
}
