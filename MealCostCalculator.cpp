#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

int main() {
    float mealAmount;
    float salesTaxRate = 0.07;   // 7% sales tax
    float tipRate = 0.18;        // 18% tip

    cout << "Please enter the base cost of your meal: ";
    cin >> mealAmount;

    float salesTax = mealAmount * salesTaxRate;
    float tip = mealAmount * tipRate;
    float totalCost = mealAmount + salesTax + tip;

    cout << fixed << setprecision(2);
    cout << "\nSales Tax (7%): " << salesTax << " PKR" << endl;
    cout << "Tip (18%): " << tip << " PKR" << endl;
    cout << "Total Amount: " << totalCost << " PKR" << endl;

    return 0;
}
