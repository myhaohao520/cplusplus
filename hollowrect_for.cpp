/*
  This program displays a hollow rectangle with the width adn height given by the user
*/

#include <iostream>

using namespace std;

int main()
{
    int width, height;

    cout << "Enter the width and height for the hollow rectangle: ";
    cin >> width >> height;

    //Create for loop to display rectangle based on the user's inputted
    //width and length
    for (int row = 1; row <= height; row++)
    {
        for (int column = 1; column <= width; column++)
        {
            //Display '*'s only in first row/column or last row/column
            if (row == 1 || column == 1 || row == height || column == width)
              cout << "*";
            else
              cout << " ";
        }
    //Display hollow rectangle
    cout << endl;
    }
    return 0;
}
