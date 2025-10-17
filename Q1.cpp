//Write a C++ program to define a structure named ‘Item‘ having members ‘id‘ (integer) and ‘cost‘ (float), declare an array of 6 ‘Item‘ structures, initialize the first four elements with sample data, and then use a ‘for‘ loop to iterate through the entire array, displaying the details of any item whose ‘cost‘ is greater than 50.00.
#include <iostream>
using namespace std;

struct Item
{
    int id;
    float cost;
};

int main() 
{
    
    Item items[6] = {
        {1, 45.50},  
        {2, 75.25},  
        {3, 35.00},  
        {4, 100.00}, 
        {0, 0.00},   
        {0, 80.00} };

    cout << "Items with cost greater than 50.00:" << endl;
    for (int i = 0; i < 6; i++) 
    {
        if (items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }

    return 0;
}
