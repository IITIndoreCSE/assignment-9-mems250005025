//Write a C++ program to define a structure ‘SalesRecord‘ with members ‘month‘ (string) and ‘amount‘ (float), declare an array of 12 ‘SalesRecord‘ structures (representing a year), use a ‘for‘ loop to accept user input for the ‘month‘ name and the ‘amount‘ for all 12 months, and then, using a single pass with a ‘for‘ loop, find and display the ‘month‘ with the maximum sales ‘amount‘ and the ‘month‘ with the minimum sales ‘amount‘.
#include <iostream>
#include <string>
using namespace std;

struct SalesRecord {
    string month;
    float amount;
};

int main() {
   
    SalesRecord sales[12];

    
    for (int i = 0; i < 12; i++) {
        cout << "Enter the month name: ";
        cin >> sales[i].month;
        cout << "Enter sales amount for " << sales[i].month << ": ";
        cin >> sales[i].amount;
    }
    float maxSales = sales[0].amount, minSales = sales[0].amount;
    string maxMonth = sales[0].month, minMonth = sales[0].month;

    for (int i = 1; i < 12; i++) {
        if (sales[i].amount > maxSales) {
            maxSales = sales[i].amount;
            maxMonth = sales[i].month;
        }
        if (sales[i].amount < minSales) {
            minSales = sales[i].amount;
            minMonth = sales[i].month;
        }
    }
    cout << "\nThe month with the maximum sales is: " << maxMonth << " with an amount of " << maxSales << endl;
    cout << "The month with the minimum sales is: " << minMonth << " with an amount of " << minSales << endl;

    return 0;
}
