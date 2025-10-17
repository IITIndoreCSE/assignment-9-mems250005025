// Write a C++ program to define a structure ‘Color‘ with members ‘red‘, ‘green‘, and ‘blue‘ (all integers), declare and initialize an array of 5 ‘Color‘ structures with sample RGB values, and then use a ‘for‘ loop to invert the color values of the first 3 elements in the array (by setting each component to 255−original value), finally displaying the new RGB values for all 5 elements.
#include <iostream>
using namespace std;


struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    
    Color colors[5] = {
        {255, 0, 0},   
        {0, 255, 0},   
        {0, 0, 255},  
        {255, 255, 0}, 
        {0, 255, 255}  
    };

    
    for (int i = 0; i < 3; i++) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }

    
    cout << "Updated RGB values of all colors:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << " - Red: " << colors[i].red 
             << ", Green: " << colors[i].green 
             << ", Blue: " << colors[i].blue << endl;
    }

    return 0;
}
