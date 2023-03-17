/*
  Name: Jian Hao Tang
  Date: 02-01-2023
*/
//This program calculates the surface area and volume of a cube

#include <iostream>
using namespace std;

int main()
{
  //Create variables to store the value of the side, surface area, and volume of the cube
  double side, surface_area, volume;

  //Ask user for the side value
  cout << "What is the side of the cube? ";
  cin >> side;

  //Calculate surface area
  surface_area = 6 * side * side;

  //Calculate volume
  volume = side * side * side;

  //Display surface area
  cout << "The surface area of the cube is " << surface_area << endl;

  //Display volume
  cout << "The volume of the triangle is " << volume << endl;

  return 0;
}
