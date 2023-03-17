/* Program to find sum and product
by adding and multiplying two integer inputs */  // Forgot the * before or after the forward slash to make these a lines comment
/* Name: Jian Hao Tang
   Date: 01-26-2023
*/

#include <iostream>
using namespace std; // Must include this to avoid having to type std:: every time


int main() // Forgot parentheses in the main function
{

    // Declare variables to hold inputs and calculations
    int Number1, Number2,  // Variables separated by commas only and lowercase int
        Sum, product;

    // Ask for two integer inputs
    cout << "Enter first number: "; // Fix the operators from >> to <<
    cin >> Number1;  // Fix lowercase to uppercase, fix direction of the operators from << to >>

    cout << "Enter second number: ";
    cin >> Number2;

    // Do the math to add and multiply
    Sum = Number1 + Number2;  // Fix lowercase sum to uppercase Sum and delete spaces in variables
    product = Number1 * Number2; // Typo in Number1

    // Output the result of Sum and Product
    cout << "The sum of " << Number1 << " + " << Number2 << " is " << Sum << endl;
    cout << "The product of " << Number1 << " x " << Number2 << " is " << product << endl;  // Replace different to product variable
}   // Close the function
