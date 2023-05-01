//declare int array with 25 elements
int scores[25];

//declare a char array with 80 elements
char streetAddress[80];

//declare int array with 10 elements: 10, 20, ... 100
int a[10] = {10,20,30,40,50,60,70,80,90,100};

//declare double array with 5 elements: 0.10,0.15,0.21,0.28,0.31 
double taxRates[5] = {0.10,0.15,0.21,0.28,0.31};

//declare int array with 6 elements: 1,5,10,25,50,100
int denominations[6] = {1,5,10,25,50,100};

//An array of 100 integers is declared. What is the largest integer that can be used as an index to the array?
999

//Suppose v is an array with 100 int elements. If 100 is assigned to v[100] what happens?
Another variable or array will very likely be unexpectedly modded

//write expresson to refer to first elements
a[0]

//a with 34 elements, write expression that refers to the last element
a[33]

//int array arr declared with ARR_SIZE of elements
//write statement that assigns x the next to last element
//if # of elements is 5(0,1,2,3,4), the next to last element 3 is ARR_SIZE - 2 
x = arr[ARR_SIZE - 2];

//assign 3 to the first element in int array a
a[0] = 3;

//assign 30000 to the first element in int array salarySteps with 5 elements
salarySteps[0] = 30000;

//assign 160000 to the last element in salarySteps with 5 elements
salarySteps[4] = 160000;

//add ten to the 1st element in int array a with 5 elements
a[0] += 10;

//assign 5 to the last element in int array a with 30 elements
a[29] = 5;

//printArray that returns no value have two parameters: int array and int(# of elements in the array)
//prints the contents of the array parameter
//inventory is an array of ints 
//n holds the # of elements in the array
//write statement that prints the contents of inventory by calling printArray
printArray(inventory, n);

//declare function prototype for printArray that returns no value with two parameters: int array and int
void printArray(int*, int);

//write printArray function with two parameters, int array and int
//returns no value
//prints each element of the array by itself, one element in each line
void printArray(int *array, int num)
{
	for (int i = 0; i < num; i++)
		cout << array[i] << endl;
}

//write sumArray function with two parameters, an int array and int
//returns sum of all elements as an int
int sumArray(int *array, int num)
{
	int sum = 0;
	for (int i = 0; i < num; i++)
		sum += array[i];
	return sum;
}

//write isReverse function with three parameters, int array and int array and int(size of each array)
//returns true if one array is the reverse of the other
bool isReverse(int array1[], int array2[], int size)
{
	for (int i = 0; i < size; i++)
		if (array1[i] != array2[size - i - 1])
			return false; //return false if the first element is not equal to the last element of the other
	return true; //else return true
}

//declare a 3x3 two dimensional int array named tictactoe
int tictactoe[3][3];

//declare a two dimensional string array of 8x8 named chessboard
string chessboard[8][8];

//write an expression to 2x the value of the 3rd(which is 2) row and 2nd(which is 1) column in a two dimensional double array named x
x[2][1] * 2

//write an expression to add the sum of the 3row/4column and 5row/1column in a two dimensional int array x
x[2][3] + x[4][0]

//declare two dimensional int array arr with 3x10
int arr[3][10];

//declare int array westboundHollandTunnelTraffic 10x52x7x24
int westboundHollandTunnelTraffic[10][52][7][24];

//declare function reverse with int array and int(# of elements)
//returns no value
//reverse the the elements in the array
void reverse(int array[], int size)
{
	int i = 0;
	int j = size - 1;
	while (i < j)
	{
		int temp = array[i]; //store original array in temp
		array[i] = array[j]; //store reverse in array[i]
		array[j] = temp; //store oringal in array[j]
		i++;
		j--;
	}
}

//given int array a and int n(number of elements)
//assign -1 to the last element of a
a[n-1] = -1;

//given int arrary a with 12 elements
//int k holds value from 0 to 6
//assign 15  to values in a whose index is k
a[k] = 15;

//given int array a with 12 elements
//int k holds value between 0 to 6
//assign 9 to value after k in array a
a[k+1] = 9;

//given int array a with 12 elements
//int k holds value 2 to 8
//assign 22 to value before k int array a
a[k-1] = 22;

//int array monthSales holds 12 elements (0 to 11)
//write statement to cout element october (which is 9)
cout << monthSales[9];

//int array a with 5 elements (0 to 4)
//write statement assign value (2x last element) to the first element
int num = a[4] * 2; //2x last element
a[0] = num; //assign new value

//int array a with 5 elements (0 to 4)
//int j holds 0 to 3
//write statement to assign value (2x value of the next element} to the index j
int num = a[j+1] * 2; //2x next index j value
a[j] = num; //assign new value

//int array arr, int i and int j
//write code to swap arr[i] and arr[j]
int temp = arr[j]; //store arr[j] in temp
arr[j] = arr[i]; //assign arr[i] to arr[j]
arr[i] = temp; //assign temp which is arr[j] to arr[i]
