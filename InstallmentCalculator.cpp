#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

int main() {
    int baseAmount;
    int numInstallments;
    double totalAmount;
    
    cout << "Please enter the base purchase amount: ";
    cin >> baseAmount;

    cout << "Please enter the desired number of installments: ";
    cin >> numInstallments;

    // Add 50% markup
    totalAmount = baseAmount * 1.5;

    // Calculate installment cost
    double installmentCost = totalAmount / numInstallments;

    // Display results
    cout << fixed << setprecision(2);
    cout << "\nTotal purchase amount with 50% markup: " << totalAmount << " PKR" << endl;
    cout << "Each installment will cost: " << installmentCost << " PKR" << endl;

    return 0;
}
