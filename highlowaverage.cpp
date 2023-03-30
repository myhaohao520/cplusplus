/*
    Name: Jian Hao Tang
    Date: 03-30-2023
    Program Lab 6B: This program reads in values range 0 to 100 from input
    file and determines the high and low value, and calculates te average,
    then output the values to tan output file
*/

#include<iostream>
#include<iomanip>
#include <fstream>
using namespace std;

//Declare function prototypes
bool Check_Value(int);
void Calculate_Stat(ifstream&, int, int&, int&, float&);

int main()
{
    int num = 0, high = 0, low = 100, /*average,*/ sum = 0, count = 0; 
    float average;
    ifstream In;
    ofstream Out;

    In.open("Data.txt");
    Out.open("Stat.txt");

    if (!In)
    {
        cout << "Input file not found, program ends" << endl;
        return -1;
    }

    Calculate_Stat(In, num, high, low, average);

    Out << "The high value is: " << high << endl;
    Out << "The low value is: " << low << endl;
    Out << "There average is: " << average << endl;

    In.close();
    Out.close();
    return 0;
}

//This function checks the values in the file for if the value is between 0 and 100
bool Check_Value(int x)
{
    if (x >= 0 && x <= 100)
        return true;
    else
        return false;
}

//This function reads the input file and determines the min/max and calculate
//the average
void Calculate_Stat(ifstream& In, int x, int& max, int& min, float& average)
{
    int count = 0, sum = 0;
    /*
    while (In >> num)
    {
        if (num >= 0 && num <= 100)
        {
            if (num < low)
                low = num;
            if (num > high)
                high = num;
            count++;
            sum += num;
        }
    }
    average = float(sum) / count;
    */

    while (In >> x)
    {
        if (Check_Value(x) == true)
        {
            if (x < min)
                min = x;
            if (x > max)
                max = x;
            count++;
            sum += x;
        }
    }
    average = float(sum) / count;
}
