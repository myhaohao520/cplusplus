#include <iostream>
using namespace std;

int main()
{
	//set the size of array to 10
  int size = 10; 
	//initialize the array with 5 integers
  int numbers[size] = {69,79,89,99,109}; 
	
	//iterate the elements of the array up to the size of the array
  for (int i = 0; i <= sizeof(numbers[i]); i++)
    //display the 5 values separated by a space on the original array
		cout << numbers[i] << " ";
	cout << endl;
	
  //iterate the elements of the array up to the size of the array
  for (int i = 0; i <= sizeof(numbers[i]); i++)
  {
		//assign 100 to the values
    numbers[i] = 100;
		//display the 5 values
    cout << numbers[i] << " ";
  }
	//display the for loop
  cout << endl;
    
return 0;
}
