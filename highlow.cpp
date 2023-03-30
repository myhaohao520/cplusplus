//This program reads values from 0 to 100 from an input file and determines the
//high and low value, then output it to an output file

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	int num, 
	high = 0, //assign 0 to high because the value must be higher than 0
	low = 100; //assign 100 to low because the values must be lower than 100
	
	//assign file objects and open input/output files
	ifstream In;
	ofstream Out;
	In.open("data.txt");
	Out.open("HighLow.txt");
	
	//check if input file exists
	if (!In)
	{
		cout << "Input file not found" << endl;
		return -1;
	}
	
	//read in first value;
	cin >> num;
	
	//to read in all values in the file until end of file
	while (!In.eof)
	{
		//check if the value is less than low
		if (num < low)
			low = num;
		//check if value is greater than high
		if (num > high)
			high = hum;
		//read in next value
		cin >> num;
		
	//output the high and low value
	Out << high << " " << low << endl;
	
	//close files
	In.close;
	Out.close;
	
	return 0;
}
