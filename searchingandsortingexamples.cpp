//Searching and Sorting

//Given int k, int currentMembers[], int nMembers(# of elements), int memberID, bool isAMember
//Write code to assign true to isAMember if value of memberID is found in currentMembers, if not found assign false
for (k = 0; k < nMembers-1; k++)
{
	if (currentMembers[k] == memberID)
		isAMember = true;
	else
		isAMember = false;
}


//Given int k, int zipcodeList[], int nZips(# of elements), bool duplicatees
//Write code to assign true to duplicates if there are two adjacent elements in the array of the same value, assign false if not
//first assign false to duplicates, reassign if needed after searching the array
duplicates = false;
for (k = 0; k < nZips-1; k++)
{
	if (zipcodeList[k] == zipcodeList[k+1])
		duplicates = true;
}


//Given int j and k , int zipcodeList[], int nZips(# of elements), bool duplicates
//Write code to assign true to duplicates if any two elements in the array have the same value
//assign false otherwise
duplicates = false;
//loop to iterate the array starting from 0th index
for (j = 0; j < nZips; j++)
{
	//loop to iterate the next index and compare to the index before
	for(k = j + 1; k < nZips; k++)
	{
		if (zipcodeList[j] == zipcodeList[k]) //check if two values are the same
		{
			duplicates = true; //assign true if two values the same
		}
	}
}

//Given int k, int incompletes[], int nIncompletes(# of elements), int studentID, int numberofIncompletes
//Write code to count number of times the value of studentID appears and assign the value to numberofIncompletes
numberOfIncompletes = 0; //initialize to zero
for (k = 0; k < nIncompletes-1; k++) //iterate array
{
	if (incompletes[k] == studentID) //search for occurences
		numberOfIncompletes++; //add number of occurences each time
}


//Define isSorted function with three parameters: int array, int num(# of elements), bool result
//if bool result is true, isSorted returns true if the array is sorted in ascending order
//if bool result is false, isSorted returns true if the array is sorted in descending order
//return false otherwise
bool isSorted(int array[], int num, bool result)
{
	//hold true
	bool flag = true;
	
	//for ascending
	if (result == true)
	{
		for (int i = 0; i < num-1; i++)
		{
			if (array[i] > array[i+1]) //in ascending order
				flag = false;
		}
	}
	else if (result == false)
	{
		//for descending
		for (int i = 0; i < num-1; i++)
		{
			if (array[i] < array[i+1]) //in descending order
				flag = false;
		}
	}
	return flag; //returns true if the array is sorted in either ascending/descending order, otherwise will return false
}


//declare char array named smallWord to store four letter words
//firstWord is a C-string
char smallWord[5];


//write statement to read in word to char array firstWord
//given that the char array can hold up to 50 letters
//firstWord is a C-string
cin >> firstWord;


//Print out 3 social sec numbers of 9 digits each, one in each line
//Given char array ssn
for (int count = 0; count < 3; count++)
{
	cin.get(ssn, 10); //read in 9 digits including \0
	for (int i = 0; i < 9; i++) //display onle 9 digits excluding \0
	{
		cout << ssn[i];
	}
	cout << endl;
}


//declare and read in 9 char from stdin into char array ssn
char ssn[10];
cin >> ssn;


//Assume the stdin consists of a long sequence of ACGT letters for a gene
//Write code to skip over the first 7 letters and read the next 4 triad(a seq of three leters), each of is own line
char array[100];
int end = 19; //print out the next 12
int count = 0;
cin >> array;
for (int first = 7; first < end; first++)
{
	cout << array[first];
	count++;
	if (count == 3)
	{
		cout << endl;
		count = 0;
	}
}


//declare a char array named line to store c-string of 50 characters
//and read the next line of stdin in the array
char line[50];
cin >> line;


//write expression that evaluates to true if c-string s is equal to c-string "end"
strcmp(s,"end") == 0


//write expression that returns true if c-string sl is greater than c-string s2
strcmp(s1,s2) > 0


//write expression that evaluates to true if value of lastName is greater than "Dexter"
strcmp(lastName,"Dexter") > 0


//write expression that evaluates true if s is not equal to "end"
!strcmp(s,"end") == 0


//declare string variable mailingAddress
string mailingAddress;


//declare 3 string variables winner, placed, show
string winner, placed, show;


//declare string var empty and initialize to an empty string
string empty = "";


//declare string var oneSpace and initialize to single space
string oneSpace = " ";


//given string var message
//write statement to print out to stdout
cout << message;


//given string var word
//write statement to print "Today's Word-Of-The-Day is: " + word
cout << "Today's Word-Of-The-Day is: " << word;


//given string var address
//write string expression of "http://" and print value of address after it
"http://" + address


//given string var word
//write an expression, to put the value of word in parentheses
"(" + word + ")"


//write expression to put the string var suffix to the end of string var prefix
prefix + suffix


//given string var name and age 
//write some code to read in name and age, then print out the message: "The age of {NAME} is {AGE}."
cin >> name >> age;
cout << "The age of " << name << " is " << age << ".";


//given string var name
//write some code to print out: "Greetings, NAME"
cin >> name;
cout << "Greetings, " << name;


//given string var name
//write code to read in name, and print out: "Greetings, NAME!!!"
cin >> name;
cout << "Greetings, " << name << "!!!";


//given string var name
//write expression to show the first char of name
name[0]


//given string var name
//write expression to show second char of name
name[1]


//given bool var recalled,  int var modelYear, string var modelName
//write statement to assign true to recalled if the values matchs Extravagant 1999-2002 and Guzzler 2004-2007
//separately
recalled = false; //flag that will be changed
if(modelName == "Guzzler" && modelYear <= 2007 && modelYear >= 2004)
	recalled = true;
else if (modelName == "Extravagant" && modelYear <= 2002 && modelYear >= 1999)
	recalled = true;

or

//given bool var recalled,  int var modelYear, string var modelName
//write statement to assign true to recalled if the values matchs Extravagant 1999-2002 and Guzzler 2004-2007
//all in one
recalled = false; //flag that will be changed
if(modelName == "Guzzler" && modelYear <= 2007 && modelYear >= 2004 || modelName == "Extravagant" && modelYear <= 2002 && modelYear >= 1999)
	recalled = true; //assign to true


//given bool var recalled,  int var modelYear, string var modelName
//write statement to assign true to recalled if the values matchs Extravagant 1999-2002 and Guzzler 2004-2007
//without if statement
recalled = (modelName == "Guzzler" && modelYear <= 2007 && modelYear >= 2004 || modelName == "Extravagant" && modelYear <= 2002 && modelYear >= 1999);


//given string var name
//write expression to show first char of name
name[0]


//write expression to show 3rd to 10th char in string var s
cout << s.substr(2,8)


//gien string var address
//write expression to return position of first occurence of string "Avenue" in address
cout << address.find("Avenue")


//given string var sentence and string var firstWord
//assign the first word of string sentence to firstWord
//first find the first space, meaning the end of the first word
int i = sentence.find(" ");
//use substr to assign the first word, from 0th index to index of the first space
firstWord = sentence.substr(0, i);
