//protoype function that returns nothing
void printTodaysDate();

//function prototype returns nothing with one int parameter
void printErrorDescription(int);

//function prototype returns no value with two int parameters
void printLarger(int, int);

//function prototype returns int value and one int parameter
int twice(int);

//function prototype return int value with two int parameters
int add(int, int);

//function prototype returns a double value with one double and one int parameter
double powerTo(double, int);

//define function that that returns no value with no parameters
//cout 5 periods and end with newline
void printDottedLine()
{
	cout << ".....\n";
}

//define function that returns no value and has a char parameter
//cout a string "Grade: (char)" and end with newline
void printGrade(char c)
{
	cout << "Grade: " << c << endl;
}

//define function with int parameter that returns no value
//cout disagree if int = 1 
//cout no opinion if in = 2
//cout agree if int = 3
//do nothing otherwise
void printAttitude(int i)
{
	switch(i)
	{
		case 1: cout << "disagree\n"; break;
		case 2: cout << "no opinion\n"; break;
		case 3: cout << "agree\n"; break;
	}
}

//define function that returns no value and has two int parameters
//cout the larger integer with newline char
//cout either integer if both are the same with newline char
void printLarger(int num1, int num2)
{
	if (num1 > num2)
		cout << num1 << endl;
	else if (num2 > num1)
		cout << num2 << endl;
	else
		cout << num1 << endl;
}

//define function with one int parameter that returns no value
//if int is negative or zero, function does nothing
//otherwise cout the int amount of hyphen '-' end with newline
void dashedLine(int i)
{
	//if i is not 0 or i is not negative
	if (i != 0 && i > 0)
	{
		//display i amount of "-"
		for (int j = 1; j <= i; j++)
			cout << "-";
		//display in a single line and end with newline
		cout << endl;
	}
}

//define function with three double parameters
//cout "no real solution" if b^2 - 4ac is negative
void f(double a, double b, double c) 
{
	int i = (b*b) - 4*a*c;
	if (i < 0)
		cout << "no real solutions" << endl;
}

//define function with three double parameters
//cout "no solution for a=0" if a is zero
void f(double a, double b, double c) 
{
	if (a == 0)
		cout << "no solution for a=0" << endl;
}

//define function with three double parameters a,b,c 
//to solve for the quadratic equations:
//sol1 = -b + sqrt(b^2 - 4ac) / 2a
//sol2 = -b - sqrt(b^2 - 4ac) / 2a
//if a is zero, cout "no solution for a=0"
//if the value of b^2 -4ac is negative, cout "no real solutions"
//otherwise cout the largest ofsolutions to the quadratic equation
void quadratic(double a, double b, double c)
{
	//variables to store the solutions
	int sol1 = -b + sqrt(b*b - 4*a*c) / (2*a);
	int sol2 = -b - sqrt(b*b - 4*a*c) / (2*a);
	
	//variable to store value for the square root
	int sq = sqrt(b*b - 4*a*c);
	
	//if a is zero
	if (a == 0)
		cout << "no solution for a=0" << endl;
	
	//if b^2 - 4ac is negative
	else if (sq < 0)
		cout << "no real solutions" << endl;
	
	//otherwise cout the largest solution
	else
	{
		if (sol1 > sol2)
			cout << sol1 << endl;
		else if (sol2 > sol1)
			cout << sol2 << endl;
	}
}

//define function with one int parameter
//returns twice the integer
int twice(int i)
{
	return (2*i);
}

//define function with two int parameters 
//returns the sum of both
int add(int i, int j)
{
	return (i+j);
}

//define function with one double and one int parameter
//and returns a double 
//if the int is negative return 0
//otherwise return the double raised to power of the int
double powerTo(double i, int j)
{
	if (j < 0)
		return 0;
	else 
		return pow(i, j);
}

//define function with one int parameter
//return an one more than the int
int  oneMore(int i)
{
	return ++i;
}

//define function with one int parameter
//return an int one less than the int
int oneLess(int i)
{
	return --i;
}

//define function with one int parameter
//returns an int half of the int parameter
int half(int i)
{
	return (i/2);
}

//define function with one int parameter
//return the square of the int
int square(int i)
{
	return i*i;
}

//define function with one int parameter
//return true if int is positive
//return false if negative
bool isPositive(int i)
{
	if (i > 0)
		return true;
	else 
		return false;
}

//define function with one int parameter
//return true if int is greater than or equal to 65 
//return false otherwise
bool isSenior(int i)
{
	if (i >= 65)
		return true;
	else
		return false;
}

//define function with one int parameter
//return true if int is even
//return false otherwise
bool isEven(int i)
{
	if (i % 2 == 0)
		return true;
	else
		return false;
}

//test function max with two int parameters that returns the larger int
//define function testmax that returns true if max is correct and false otherwise
/*max function
int max(int a, int b)
{
	if (a > b)
		return a;
	else if (b > a)
		return b;
}
*/
bool testmax()
{
	if (max(1,2) == 2 && max(2,1) == 2 && max(1,1) == 1)
		return true;
	else
		return false;
}

//test function inOrder with three int parameters and returns true if the
//parameters are in non-decreasing order, the second is not less than the 
//first, the third is not less than the second

//define testInOrder that returns true if inOrder is correct and otherwise
//return false
bool testInOrder()
{
	//test all possible cases
	if (inOrder(1,2,3) == true && 
	inOrder(1,2,2) == true && 
	inOrder(1,1,1) == true && 
	inOrder(1,1,2) == true && 
	inOrder(1,3,2) == false && 
	inOrder(3,3,2) == false && 
	inOrder(3,2,1) == false && 
	inOrder(3,2,2) == false && 
	inOrder(2,1,3) == false)
		return true;
	else
		return false;
}

//declare reference integer r that refers to i
int &r = i;

//addOne function accepts one int reference variable, and returns no value
//call the function and pass variable i
addOne(i);

//write header function addOne that has one int reference x parameter that returns no value
void addOne(int &x)

//define function addOne that adds one to its int ref parameter that returns nothing
void addOne(int &i)
{
	++i;
}

 //define function with four int parameters, returns no value
 //stores the larger of the first two parameters in the third parameter
 //stores the smaller of the first two parameters in the fourth parameter
 void maxmin(int i, int j, int &k, int &l)
 {
 	if (i > j)
 	{
 		k=i;
 		l=j;
 	}
 	else
 	{
 		k=j;
 		l=i;
	}
 }
 
 //function swapdoubles has two double parameters and exchanges their values
//define function sort3 with three double parameters
//returns no value, but sorts the values in incrementing order
void sort3(double &a, double &b, double &c)
{
	//a is largest, b second, c smallest
	if (a > b)
		swapdoubles(a, b);
	//b is largest, c second, a smallest
	if (b > c)
		swapdoubles(b, c);
	//c is largest, b second, a smallest
	if (a > b)
		swapdoubles(a,b);
}

//define swapints functions with two int parameters
//returns no value but exchanges the values 
void swapints(int &j, int &k)
{
	//Create temp variable to store j
	int temp = j;
	//assign k to j
	j = k;
	//then assign temp (which is j) back to k
	k = temp;
}

//define function that has four int variables that returns no value
//rotates the four variables
void rotate4ints(int &i, int &j, int &k, int &m)
{
	//create temp variables to store the original values
	int temp1 = i, temp2 = j, temp3 = k, temp4 = m;
	//assign the temp variables to the respective variables
	//first variable get the fourth
	i = temp4;
	//second variable gets the first
	j = temp1;
	//third variable gets the second
	k = temp2;
	//fourth gets the third
	m = temp3;
}

//zeroIt is a function that takes in one parameter that returns no value
//stores the value 0 to the parameter
//x is an int variable
//write statement that uses zeroIt to set the value stored in x to zero
zeroIt(x);

//define function with one int parameter and returns the largest value called so far
int max(int i)
{
	int l;
	if (l < i)
	{
		//create temp variable hold the value of i
		int temp = i;
		//assign temp (value of i) back to l
		l = temp;
	}
	return l;
}

//define function with no parameters that returns true the first time it is used
//return false after
bool newbie()
{
	//first, x is true
	static bool x = true;
	//create temp bool t to store x (true)
	bool t = x;
	//after the first run, x will be false
	x = false;
	//return t (which is false now)
	return t;
}

//define function with no parameters that returns true when called the first time
//then false then true
//odd = true
//even = false
bool alternator()
{
	/*
	static int i = 0;
	i++;
	if (i % 2 == 1)
		return true;
	else 
		return false;
	*/
	
	static int x = 1;
	x++;
	if (x % 2 == 0)
		return true;
	else
		return false;
}

//define function with a double parameters that returns the average (as a double)
double averager(double i)
{
	//create static double to store the numbers
	static double sum = 0;
	//create static counter
	static int num = 0;
	//store the number to sum
	sum += i;
	//increase counter
	num++;
	//return average
	return sum/num;
}

//define function with three double parameters 
//returns the number of hours it takes a vehicle to go from starting mile marker to ending
//static value speed = 55 mph
//static milesStartingPoint = 0.0
double timeOnHighway(double mileEndingPoint, double mileStartingPoint = 0.0, double speed = 55)
{
	mileStartingPoint;
	speed;
	return (mileEndingPoint - mileStartingPoint) / speed;
}
