#include <iostream>
using namespace std;

void bubbleSortArray(int [], int);
void displayArray(int[], int);

const int SIZE = 10;

int main()
{
    int values[SIZE] = {9,2,0,11,5,20,1,15,10,4};

    cout << "The values before the bubble sort is performed are:" << endl;
    displayArray(values,SIZE);

    bubbleSortArray(values,SIZE);

    cout << "The values after the bubble sort is performed are:" << endl;
    displayArray(values,SIZE);

    return 0;
}



// displayArray
// task: to print the array
// data in: the array to be printed, the array size

void displayArray(int array[], int elems)
{
    for (int count = 0; count < elems; count++)
        cout << array[count] << " ";

    cout << endl << endl;
}



// bubbleSortArray
// task: to sort values of an array in ascending order
// data in: the array, the array size
// data out: the sorted array

void bubbleSortArray(int array[], int elems)
{
    bool swap;
    int temp;
    int bottom = elems - 1;                 // bottom indicates the end part of the array where the
                                            // largest values have settled in order
    do {
        swap = false;
        for (int count = 0; count < bottom; count++)
        {
            if (array[count] > array[count+1])
            {                               // the next three lines do a swap
                temp = array[count];
                array[count] = array[count+1];
                array[count+1] = temp;
                swap = true;                // indicates that a swap occurred
            }

            //cout << "pass #" << count + 1 << "   ";
            //displayArray(array,SIZE);
        }

        bottom--;                           // bottom is decremented by 1 since each pass through the array
                                            // adds one more value that is set in order
        //displayArray(array,SIZE);

    } while(swap != false);                 // loop repeats until a pass through the array with
                                            // no swaps occurs
}
