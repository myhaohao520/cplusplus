/*
	Name: Jian Hao Tang
	Date: 2023-04-15
	Program array15: This program asks the user for 15 numbers and stores\
	them in an array. Then asks the user which value in the array to display.
	If the user enters 0, display the first and last number then the array in
	reverse order.
*/

#include <iostream>
using namespace std;

//function prototypes
//Microsoft Visual Studios require POINT-TO-OBJECT TYPE
//Use * for point to object type for the array
void GetInput(int *); //ask for the 15 numbers
void GetInteger(int *); //show the number the user wants to see

//constant for number of elements in the array
const int ARRAY_SIZE = 15;

int main()
{
	//declare array
	int numbers[ARRAY_SIZE];
	//call getinput function
	GetInput(numbers);
	//call getinteger function
	GetInteger(numbers);
	return 0;
}

void GetInput(int *numbers)
{
	//user entered number
	int num;
	
	//ask for the 15 numbers
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "Enter integer #" << (i + 1) << ": ";
		cin >> num;
		numbers[i] = num;
	}
	cout << endl;
	
}

void GetInteger(int *numbers) //Try with only do-while loop and try do-while loop with switch
{
	//user entered element to display
	int num;

	//--------------------//
	//JUST A DO-WHILE LOOP//
	//--------------------//
	/*
	//ask user which element to display, from 1 to 15
	do
	{
		cout << "Which of your inputs do you want to see?";
		cout << " (Enter a number from 1 to 15, or 0 to end}: ";
		cin >> num;

		//display the value the users asked for
		cout << num << "th input you entered is " << numbers[num - 1] << endl;

	} while (num > 0 && num <= ARRAY_SIZE);

	//if user enters zero, display first and last number
	//and display all numbers in array in reverse order
	if (num == 0)
	{
		//display first element
		cout << "\nThe first number is " << numbers[0] << endl;
		//display last element
		cout << "The last number is " << numbers[ARRAY_SIZE - 1] << endl;
		
		//display array in reverse order
		cout << "The numbers in reverse order is:" << endl;
		//for loop to display values in reverse
		for (int k = ARRAY_SIZE - 1; k >= 0; k--)
			cout << numbers[k] << " ";
		cout << endl;
	}
	*/

	//-------------------------//
	//DO-WHILE LOOP WITH SWITCH//
	//-------------------------//
	
	do
	{
		cout << "Which of your inputs do you want to see?";
		cout << " (Enter a number from 1 to 15, or 0 to end}: ";
		cin >> num;

		//display the value the users asked for
		switch (num)
		{
		case 1: cout << num << "th input you entered is " << numbers[0] << endl; break;
		case 2: cout << num << "th input you entered is " << numbers[1] << endl; break;
		case 3: cout << num << "th input you entered is " << numbers[2] << endl; break;
		case 4: cout << num << "th input you entered is " << numbers[3] << endl; break;
		case 5: cout << num << "th input you entered is " << numbers[4] << endl; break;
		case 6: cout << num << "th input you entered is " << numbers[5] << endl; break;
		case 7: cout << num << "th input you entered is " << numbers[6] << endl; break;
		case 8: cout << num << "th input you entered is " << numbers[7] << endl; break;
		case 9: cout << num << "th input you entered is " << numbers[8] << endl; break;
		case 10: cout << num << "th input you entered is " << numbers[9] << endl; break;
		case 11: cout << num << "th input you entered is " << numbers[10] << endl; break;
		case 12: cout << num << "th input you entered is " << numbers[11] << endl; break;
		case 13: cout << num << "th input you entered is " << numbers[12] << endl; break;
		case 14: cout << num << "th input you entered is " << numbers[13] << endl; break;
		case 15: cout << num << "th input you entered is " << numbers[14] << endl; break;
		}
	} while (num >= 1 && num <= ARRAY_SIZE);

	//if user enters zero, display first and last number
	//and display all numbers in array in reverse order
	if (num == 0)
	{
		//display first element
		cout << "\nThe first number is " << numbers[0] << endl;
		//display last element
		cout << "The last number is " << numbers[ARRAY_SIZE - 1] << endl;

		//display array in reverse order
		cout << "The numbers in reverse order is:" << endl;
		//for loop to display values in reverse
		for (int k = ARRAY_SIZE - 1; k >= 0; k--)
			cout << numbers[k] << " ";
		cout << endl;
	}
	
}
