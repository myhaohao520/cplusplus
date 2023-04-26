/*
    Name: Jian Hao Tang
    Temperatures.cpp: This program reads in temperature values from the user's
    chosen input file. Print out the average for temperatures between the two
    days that the user choose and print those days in between.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

//create constant to set max values the program will read in
const int MAXSIZE = 1000;

//function prototypes
int getData(string, double[]);
double getAverage(double[], int, int);
int getIndexOfMax(double[], int, int);
void printValues(double[], int, int);

int main()
{
    //declare and initialize temperatures array
    double temperatures[MAXSIZE] = { 0 };

    //declare string value to hold filename
    string fileName;

    //ask user to enter file name and store it
    cout << "Enter the input file name: ";
    cin >> fileName;

    //call getdata and store the vale
    int numTemps = getData(fileName, temperatures);

    //if value is -1 means the file cannot open
    if (numTemps == -1)
        cout << "Error opening file." << endl;

    //if value is 0 means the file is empty
    else if (numTemps == 0)
        cout << "File contains no data." << endl;

    //if file opens
    else 
    {
        //store the 2 days that the user chooses
        int day1, day2;

        //display number of values read
        cout << numTemps << " temperatures were read in." << endl;
        
        //store user response n to quit
        char response;

        do 
        {
            //ask user for day1 and day2
            cout << "Enter first day: ";
            cin >> day1;
            cout << "Enter second day: ";
            cin >> day2;

            //call the functions
            printValues(temperatures, day1, day2);
            
            double average = getAverage(temperatures, day1, day2);
            cout << "The average temp was " << average << endl;
 
            //declare and initialize variable to hold max array value
            cout << setprecision(0);
            int max = getIndexOfMax(temperatures, day1, day2);
            cout << "The maximum temp was " << temperatures[max] << " on day " << max << endl;

            //ask user to run again to quit
            cout << "Enter y to run again or n to quit: ";
            cin >> response;

        } while (response != 'n');
    }

    cout << "Bye!" << endl;

    return 0;
}


// fill array with data from file, return number of values read in
// open file, check file, and read all values in with one call to this function
int getData(string fileName, double values[])
{
    //create input file and open it
    ifstream inputfile;
    inputfile.open(fileName.c_str());

    //read values in the array
    //to count for number of values
    int num_Temps = 0;
    
    //read initially
    //inputfile >> values[num_Temps]; 
    //if I read once initially, the first value does not get added to the array
    
    //read all values until end of file or until max reached
    while (!inputfile.eof() && num_Temps < MAXSIZE)
    {
        inputfile >> values[num_Temps+1];
        num_Temps++;
    }
    
    /*
    //some numbers become zeros using this method
    int num;
    while (inputfile >> num && num_Temps < MAXSIZE)
    {
        values[num_Temps++] = num;
        num_Temps++;
    }
    */
    
    //checks
    //empty file
    if (num_Temps == 0)
        return 0;
    //file not open
    else if (!inputfile) //or use .is_open()
        return -1;
    //return number of values
    else
        return num_Temps;

    //close inputfile
    inputfile.close();
}


// return the average of array values between index1 and index2, inclusive
// index1 and index2 are day1 and day2 given by user
double getAverage(double values[], int index1, int index2)
{
    double sum = 0;
    double num = 0;

    //increment from first day to last day chosen by user
    for (int i = index1; i <= index2; i++)
    {

        sum += values[i];
        num++;
    }
    //return average
    cout << fixed << setprecision(2);
    return double(sum / num);
}


// get the index of the maximum array value between index1 and index2, inclusive.
int getIndexOfMax(double values[], int index1, int index2) 
{
    //declare and initialize variable to hold index position
    int max = index1;

    //iteratre through array to find max value and position
    for (int i = index1; i <= index2; i++)
    {
        //update the origional values
        if (values[i] > values[max])
            max = i;
    }
    return max;
}


// print the temperature values from startDay to endDay inclusive.
// startDay and endDay are day1 and day2 given by user
void printValues(double temps[], int startDay, int endDay)
{
    cout << left << setw(5) << "Day" << setw(15) << "Temperature" << endl;
    for (int i = startDay; i <= endDay; i++)
    {
        cout << left << setw(5) << i << setw(15) << temps[i] << endl;
    }
    cout << endl;
}
