# Pointer-Basics
Call by Value and Call by Reference in C++
Aim
The aim of this C++ program is to demonstrate the concepts of call by value and call by reference. This program showcases how passing parameters to functions can either affect the original variables or work with copies, depending on the parameter passing method.

Theory
In C++, functions can receive parameters using two methods:

Call by Value: In this method, function parameters receive copies of the original values. Any modifications within the function do not affect the original variables.
Call by Reference: In this method, function parameters receive references to the original variables. Any changes made to these references inside the function directly affect the original variables.
Algorithm
This program follows these steps:

Declare two integer variables, x and y, and initialize them with values, e.g., x = 650 and y = 250.
Define a function called swap that accepts two integer parameters, x and y. This function is designed to swap the values of x and y by using a temporary variable.
In the main function, call the swap function, passing the memory addresses (references) of x and y using the & operator. This results in a call by reference, so any changes in swap will directly affect x and y.
Output the values of x and y to observe the changes made by the swap` function.
Conclusion
This program provides a clear demonstration of the difference between call by value and call by reference. The swap function, when called by reference, directly swaps the values of x and y. Understanding parameter passing methods is essential when working with functions and can significantly impact the behavior of your programs.

The ability to manipulate variables using call by reference is especially useful when you want to modify variables inside functions and have those modifications reflected outside the functions.
