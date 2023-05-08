//Structures examples

//declare struct named Money that contains two integer var dollars, cents
struct Money {
	int dollars, cents;
};


//define struct POINT with two double var x adn y
struct POINT {
	double x, y;
};


//define struct POINT3D with three double var x,y,z
struct POINT3D {
	double x,y,z;
};


#include <string>

using namespace std;

//define struct ADDRESS with seven string var
struct ADDRESS {
	string suiteNumber, streetNumber, street, city, province, postalCode, country;
};


//define struct DATE with three int var
struct DATE {
	int dayOfMonth, month, year;
};


//given struct SREC, define struct ROSTER with int size and SREC grades array of 500 elements
struct ROSTER {
	int size;
	SREC grades[500];
};


//given NAME struct
//define struct SREC with NAME type name, string grade
//include string lib and using namespace
#include <string>
using namespace std;

struct SREC {
	NAME name; 
	string grade;
};


//declare struct Point2D with two double x and y
struct Point2D {
	double x, y;
};


//given Money price1
//struct Money iwth two int dollars and cents
//assign $29.95 to price1
price1.dollars = 29;
price1.cents 


//given struct Money with two int dollars and cents
//given variables revenue, expenses and profit of Money type
//assign profit to revenue minus expenses
// if revenue cents - expenses cents equal negative, subtract 1 dollar from revenue and add 100 to revenue cents to carry out subtraction properly because expensess cetns will exceed revenue cents
if (revenue.cents - expenses.cents < 0)
{
	profit.dollars = ((revenue.dollars - 1) - expenses.dollars);
	profit.cents = ((revenue.cents + 100) - expenses.cents);
}
else
{
	profit.dollars = revenue.dollars - expenses.dollars;
	profit.cents = revenue.cents - expenses.cents;
}


//given struct POINT with doubles x and y
//given p1 and p2 of POINT type
//write code to make p2 the reflection of p1
//assign p2 y to p1 x
//assign p2 x to p1 y
p2.y = p1.x;
p2.x = p1.y;


//given struct POINT with double x and y
//givne p1 and p2 of POINT type
//assign p2 the same value of p1
p2.x = p1.x;
p2.y = p1.y;


//given struct POINT with double x and y
//given the distance of a point (x,y) from the origin is sqrt of sum of x^2 and y^2
//given p variable of POINT type
//write expression to find distance of point p from origin
sqrt((p.x*p.x) + (p.y*p.y))


//given POINT with double x and y
//given distance between point A and point B is the sqrt(B's y - A's y squared + B's x - A's x squared) 
//calculate distance between point p1 and p2
sqrt((p2.x-p1.x)*(p2.x-p1.x) + (p2.y-p1.y)*(p2.y-p1.y))


//given struct Point with double x and y
//given var origin of Point type
//given math notion of origin is both x and y are zero
//write statements to make var origin the math notion of origin
origin.x = 0;
origin.y = 0;


//given struct Team with string pitcher
//given mets var Team type
//assign Acosta to pitcher
mets.pitcher = "Acosta";


//declare bestSeller var of Book type
Book bestSeller;


//declare billing and shipping of ADDRESS type
ADDRESS billing, shipping;


//declare revenue, expenses, profit of Money type
Money revenue, expenses, profit;


//declare enrolled_on, paid_on, completed_on of DATE type
DATE enrolled_on, paid_on, completed_on;


//declare monthlySales array with 12 elements of Money type
Money monthlySales[12];


//declare allPrecincts array with NPRCINCTS elements of PrecinctReport type
PrecinctReport allPrecincts[N


//given struct BlogComment with string comment, int like, int dislike
//given BlogComment type array blogComments[nComments]
//given string var mostControversial
//write code to search blogComments for the most controversial entry and assign that comment to mostControversial string var
//if #1 comment's degree of controversy (measured by like x dislike) is higher than #2, then #1 is more controlversial
//second comment
int j = 0;
for (int i = 0; i < nComments; i++)
{
	if (blogComments[i].like*blogComments[i].dislike > blogComments[j++].like*blogComments[j++].dislike)
		mostControversial = blogComments[i].comment;
}


//given struct PrecinctReport with string address, int felonies, int murders, int robberies
//given allPrecincts[NPRECINCTS] of PrecinctReport type
//all all the murders and store in murderCount
murderCount = 0;
for (int i = 0; i < NPRECINCTS; i++)
{
	murderCount += allPrecincts[i].murders;
}


//given struct Money with int dollars and int cents
//given array monthlySales[12] of type Money
//given Money yearlySales
//write code to go through monthlySales array and add up all total in yearlySales
//make sure cents is less than 100
yearlySales.dollars = 0;
yearlySales.cents = 0;
for (int i = 0; i < 12; i++)
{
	yearlySales.dollars += monthlySales[i].dollars;
	yearlySales.cents += monthlySales[i].cents;
}
//add all cents over 100 to dollars
yearlySales.dollars += yearlySales.cents/100;
//leave remainder of 100 cents 
yearlySales.cents %= 100;


//given distance of a point (x,y) from origin is the sqrt(x^2 + y^2)
//given struct Point with double x and y
//define function getR with parameter of type Point that returns double distance of that point from origin
double getR(Point n)
{
	return (sqrt(n.x*n.x + n.y*n.y));
}


//given distance between A and B is sqrt of (B's x - A's x) squared + {B's y - A's y) squared
//define dist() function with two parameters of struct Point type (with double x and double y)
double dist(Point i, Point j)
{
	return (sqrt((j.x-i.x)*(j.x-i.x) + (j.y-i.y)*(j.y-i.y)));
}


//iven struct Point ith double x and double y
//define function getPoint() that returns a Point value using values read in fron stdin 
Point getPoint() //no parameters
{
	Point i; //declare Point type var
	cin >> i.x >> i.y; //read in
	return i;
}


//given struct Money with int dollars and int cents
//define normalize() function with Money parameter and Money type value
//function makes the cents mormal between 0 and 99
Money normalize(Money num)
{
	num.dollars = num.dollars + num.cents/100; //add dollars and cents over 100
	num.cents %= 100; //remaining cents under 100
	return num;
}


//given struct Money with int dollars and int cents
//given normalize() with Money parameter and returns Money value
//write addMoney() with two Money parameters and returns sum 
Money addMoney(Money i, Money j)
{
	i.dollars += j.dollars; //add j dollars to i dollars
	i.cents += j.cents; //add j cents to i cents
	return normalize(i); //use normalize function to make dollar and cents normal
}
