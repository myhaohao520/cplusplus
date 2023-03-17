// Name: Jian Hao Tang
// Date: 01-19-2023
// Version: 1.0


// Use iostream library for input and output
// Use namespace std to avoid having to type std::
#include <iostream>
using namespace std;
// This program calculates the user's pay


// Create main function
int main()
{
  // Create variables
  double hours, rate, pay;

  // Get hours worked
  cout << "How many hours have you worked? ";
  cin >> hours;

  // Get pay rate
  cout << "How much do you get paid hourly? ";
  cin >> rate;

  // Calculate pay
  pay = hours * rate;

  // Display pay
  cout << "You earned $" << pay << endl;
}
