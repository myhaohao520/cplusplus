/*

  This program calculates the averave books read per month by the user

  Name: Jian Hao Tang

  Date: 02-09-2023

*/

#include <iostream>

using namespace std;

int main()

{

  //Create variables hold the values of books read, months spent reading, and average books read per month

  int books, months;

  double average;

  //Ask for books read

  cout << "How many books to read? ";

  cin >> books;

  //Ask for months spent

  cout << "How many months did it take to read them? ";

  cin >> months;

  //Calculate the average, first convert books to a double

  average = static_cast<double>(books) / months;

  //Display average

  cout << "You read " << average << " per month on average" << endl;
  
  return 0;
  
}
