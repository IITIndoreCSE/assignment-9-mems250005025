//Write a C++ program to define a structure ‘Point‘ with members ‘x‘ and ‘y‘ (both floats), declare an array of 7 ‘Point‘ structures, use a ‘for‘ loop to read the x and y coordinates for all 7 points from user input, and then iterate through the array again to count and display how many of the entered points lie in the first quadrant (where both x>0 and y>0).
#include <iostream>
using namespace std;


struct Point {
    float x;
    float y;
};

int main() {
   
    Point points[7];
    
    
    for (int i = 0; i < 7; ++i) {
        cout << "Enter coordinates for Point " << i + 1 << " (x y): ";
        cin >> points[i].x >> points[i].y;
    }

    
    int countFirstQuadrant = 0;

    for (int i = 0; i < 7; ++i) {
        if (points[i].x > 0 && points[i].y > 0) {
            ++countFirstQuadrant;
        }
    }
    cout << "Number of points in the first quadrant: " << countFirstQuadrant << endl;

    return 0;
}
