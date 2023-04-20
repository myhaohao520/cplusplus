/*
  Name: Jian Hao Tang
  Date: 2023-04-20
  Program studentaverage.cpp
*/

// This program will input an undetermined number of student names
// and a number of scores for each student. The number of scores is
// given by the user. The scores are stored in an array.
// Two functions are called for each student.
// One function will give the numeric average of their scores.
// The other function will give a letter grade to that average.
// Grades are assigned on a 10 point spread.
// 90-100 A	80-89 B	70-79 C	60-69 D	Below 60 F

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAXSCORES = 25;	            // maximum number of scores per student

float findScoreAvg(int[], int);		    // finds and return average by taking array of
// scores and number of scores as parameters

char findLetterGrade(float);			// finds letter grade from average given
// to it as a parameter


int main()
{

	int Scores[MAXSCORES];		        // one dimensional integer array to store scores
	string firstname, lastname;	        // Student's first and last name
	int numOfScores;					// holds the number of scores per student
	float average;						// holds the average of a student's grade
	char moreInput;						// determines if there is more input

	cout << fixed << setprecision(2) << showpoint;

	// Input the number of scores for each student
	cout << "Please input the number of scores each student will receive." << endl
		<< "This must be a number between 1 and " << MAXSCORES << " inclusive"
		<< endl;
	cin >> numOfScores;

	// Force the user to input number of scores is between 1 and MAXSCORES inclusive
	while (numOfScores > MAXSCORES || numOfScores < 1)
	{
		cout << "Please input the number of scores for each student." << endl
			<< "This must be a number between 1 and " << MAXSCORES
			<< " inclusive\n";
		cin >> numOfScores;
	}

	// Input names and scores for each student
	cout << "Please input a y if you want to input more students"
		<< " any other character will stop the input" << endl;
	cin >> moreInput;

	while (moreInput == 'y' || moreInput == 'Y')
	{
		cout << "Please input the first name of the student" << endl;
		cin >> firstname;

		cout << endl << "Please input the last name of the student" << endl;
		cin >> lastname;

		cout << "Enter " << numOfScores << " scores for " << firstname << " " << lastname << endl;

		for (int count = 0; count < numOfScores; count++)
		{
			cout << endl << "Please input score #" << count + 1 << ": ";

			// Fill in the input statement to place score in the array
			cin >> Scores[count];
		}

		cout << firstname << " " << lastname << " has an average of ";

		// Fill in function call to get and then print average of student to screen
		average = findScoreAvg(Scores, numOfScores);
		cout << average << endl;

		cout << firstname << " " << lastname << "'s letter grade is ";

		// Fill in function call to get and then print letter grade of student to screen
		char grade = findLetterGrade(average);
		cout << grade;

		cout << endl << endl << endl;

		cout << "Please input a y if you want to input more students"
			<< " any other character will stop the input" << endl;
		cin >> moreInput;
	}

	return 0;
}


//***********************************************************************
//
// task:	      This function finds the average of the
//                numbers stored in an array.
//
// data in:	      an array of integer numbers
// data returned: the average of all numbers in the array
//
//***********************************************************************

float findScoreAvg(int s[], int numOfScores)
{
	int sum = 0;
	// Fill in the code for this function
	for (int i = 0; i < numOfScores; i++)	//iterate through the array
		sum += s[i];						//add all the values of the array to sum

	return (float(sum / numOfScores));				//return the average of the scores as a float
}


//***********************************************************************
//
// task:	      This function finds the letter grade for the number
//                passed to it by the calling function
//
// data in:	      a floating point number
// data returned: the letter grade (based on a 10 point spread)
//                90-100 A	80-89 B	70-79 C	60-69 D	Below 60 F
//
//***********************************************************************

char findLetterGrade(float Average)
{
	// Fill in the code for this function
	
	if (Average >= 90.00 && Average <= 100)				//return A if average is greater than or equal to 90
		return 'A';
	else if (Average < 90.00 && Average >= 80.00)			//return B if average is less than 90
		return 'B';
	else if (Average < 80.00 && Average >= 70.00)			//return C if average is less than 80
		return 'C';
	else if (Average < 70.00 && Average >= 60.00)			//return D if average is less than 70
		return 'D';
	else
		return 'F';											//return F otherwise
}
