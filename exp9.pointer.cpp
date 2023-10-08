// WAP TO Call by value and call by Reference*/
#include<iostream>
using namespace std;

// Function to swap two integers by call by value
void swap(int x, int y)
{
    int swap;
    swap = x; // Store the value of x in 'swap'
    x = y;    // Assign the value of y to x
    y = swap; // Assign the stored value of x to y
}

int main()
{
    int x = 650, y = 250; // Declare and initialize two integers, x and y

    swap(*&x, *&y); // Call the swap function with x and y as arguments

    // Output the values of x and y after the swap
    cout << "Value of x is: " << x << endl;
    cout << "Value of y is: " << y << endl;

    return 0;
}
/*OUTPUT 
Value of x is: 650
Value of y is: 250*/