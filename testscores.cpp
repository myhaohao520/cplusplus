/*
  Name: Jian Hao Tang
  Date: 04-30-2023
  Program 8: This program reads in 100 test scores (with valid and invalid
  scores meaning in the range 0 to 100) from an input file, sorts them into
  valid or invalid scores, prints those scores out 5 in one row, print the
  highest/lowest scores, the average of the valid scores, and print out the
  sorted valid scores list in ascending order
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void GetInputs(int[], int[], int&, int&);
void Print(ofstream&, int[], int);
void stat(int[], int, int&, int&, double&);
void SortArray(int[], int);

int main()
{
    ofstream output;
    output.open("output.txt");

    //array of 100 scores
    const int size = 100;

    //Declare two arrays to hold the scores
    int validScores[50] = { 0 };
    int invalidScores[50] = { 0 };

    //declare counters to hold number of scores
    int validcount, invalidcount;

    //ask users for file and read the data
    GetInputs(validScores, invalidScores, validcount, invalidcount);

    //display invalid scores
    output << invalidcount << " invalid scores: " << endl;
    Print(output, invalidScores, invalidcount);
    output << endl << endl;

    //display valid scores
    output << validcount << " valid scores: " << endl;
    Print(output, validScores, validcount);
    output << endl << endl;

    //display highest and lowest and average valid score
    int high, low;
    double average;
    stat(validScores, size, high, low, average);

    output << "The highest score is " << high << endl;
    output << "The lowest score is " << low << endl;
    output << fixed << setprecision(2) << "The average score is " << average << endl << endl;

    //display sorted valid scores
    SortArray(validScores, validcount);
    output << "Sorted valid scores: " << endl;
    Print(output, validScores, validcount);

    //close output file
    output.close();

    cout << "DONE!" << endl;
    return 0;
}

void GetInputs(int valid[], int invalid[], int& validcount, int& invalidcount)
{
    ifstream inputfile;
    string filename;

    //ask user for file name
    cout << "Enter file name: ";
    cin >> filename;

    //open file
    inputfile.open(filename.c_str());

    //initialize counters and size
    validcount = 0;
    invalidcount = 0;

    //check file and read in values into a variable and sort them into respective arrays
    int num;
    while (inputfile >> num && validcount < 50 && invalidcount < 50)
    {
        if (num >= 0 && num <= 100) //if number is given 0 and 100
        {
            valid[validcount] = num;
            validcount++;
        }
        else //everything else
        {
            invalid[invalidcount] = num;
            invalidcount++;
        }
    }

    if (!inputfile) //error
    {
        cout << "Error opening file" << endl;
    }
    else if (validcount == 0 && invalidcount == 0) //file empty
    {
        cout << "File is empty" << endl;
    }

    //close file
    inputfile.close();
}

void Print(ofstream& output, int array[], int size)
{
    //create counter
    int spacer = 0;
    for (int count = 0; count < size; count++)
    {
        output <<  left << setw(4) << array[count] << " "; //print space
        spacer++; //increment counter
        if (spacer == 5)
        {
            output << endl;; //print newline
            spacer = 0; //reset counter
        }
    }
}

void stat(int array[], int size, int& high, int& low, double& average)
{
    //create counter and variable for sum of scores
    double count = 0, sum = 0;
    low = array[0];
    high = array[0];

    for (int i = 0; i < size - 1; i++)
    {
        if (array[i] >= 0 && array[i] <= 100)
        {
            if (array[i] < low)
                low = array[i]; //assign lowest number
            if (array[i] > high)
                high = array[i]; //assign highest number

            //increment counter and add up total
            count++;
            sum += array[i];
        }
    }
    //calculate average
    average = sum / count;
}

void SortArray(int array[], int size)
{
    int min_index, min_value;

    for (int start = 0; start < size - 1; start++)
    {
        min_index = start; //starting index
        min_value = array[start]; //starting value
        for (int index = start + 1; index < size; index++)
        {
            //for ascending order, replace < with > for descending order
            if (array[index] < min_value)
            {
                min_value = array[index];
                min_index = index;
            }
        }
        //swap values
        array[min_index] = array[start];
        array[start] = min_value;
    }
}
