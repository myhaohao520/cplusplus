#include <iostream>
using namespace std;

int main()
{
  int status;
  
  cout << "Available status codes: 200, 403, 404, 500" << endl;
  cout << "Enter a status code: ";
  cin >> status;
  
  switch (status)
  {
	  case 200:
	    cout << "OK (fulfilled)";
	    break;
	  case 403:
	    cout << "forbidden";
	    break;
	  case 404:
	    cout << "not found";
	    break;
	  case 500:
	    cout << "server error";
	    break;
  }
  return 0;
}
