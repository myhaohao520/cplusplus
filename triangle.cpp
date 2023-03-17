/*
   This program calculates the area of a triangle using the user's given height and width
   Name: Jian Hao Tang
   Date" 02-08-2023
*/

//Include all libraries
#include <iostream>
using namespace std;

//Create manin function
int main()
{
  //Create variables to hold the values of height, width, area
  double height, width, area;

  //Get height
  cout << "What is the height of the triangle? ";
  cin >> height;

  //Get width
  cout << "What is the width of the triangle? ";
  cin >> width;

  //Calculate the area
  area = 0.5 * height * width;

  //Display area
  cout << "The area of the triangle is " << area << endl;

  return 0;
}
