//program to display age range eligibility

#include <iostream>
using namespace std;

int main()
{
  int age;
  
  //ask user to age
  cout << "Enter age: ";
  cin >> age;
  
  //switch to determine age range eligibility
  switch (age)
  {
	  case 1:
	    cout << "ineligible";
	    break;
	  case 2: 
	    cout << "toddler";
	    break;
	  case 3 … 5:
	    cout << "early childhood";
	    break;
	  case 6 … 7:
	    cout << "young reader";
	    break;
	  case 8 … 10:
	    cout << "elementary";
	    break;
	  case 11 … 12:
	    cout << "middle";
	    break;
	  case 13: 
	    cout << "impossible";
	    break;
	  case 14 … 16:
	    cout << "high school";
	    break;
	  case 17 … 18:
	    cout << "scholar";
	    break;
	  default: 
      cout << "ineligible";
  }
  return 0;
}
