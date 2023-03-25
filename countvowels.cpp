/*
    Name: Jian Hao Tang
    Date: 03-23-2023
    Program 6A: This program display the number of vowels for
    word given by the user
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//Declare functional prototypes
bool isVowel(char);
int countVowels(string);


int main()
{
    string word;
    int numVowels;

    //Ask for user to enter a word
    cout << "Please enter a word or type \"quit\" to exit: ";
    cin >> word;

    //Display the number of vowels while the word isn't "quit"
    while (word != "quit")
    {
        //Call countVowels function and store the value
        numVowels = countVowels(word);
        cout << word << " has " << numVowels << " vowels.\n\n";
        
        //Ask user for another word or quit
        cout << "Please enter a word or type \"quit\" to exit: ";
        cin >> word;
    }
    //Display goodbye when user quits
    cout << "Goodbye!" << endl;
    return 0;
}

//This function returns the number of vowels in s.
//This function will call isVowel.
int countVowels(string s)
{
    int num_vowels = 0;

    //Iterate through the length of the string to determine
    //number of vowels
    for (int i = 0; i < s.length(); i++)
    {
        //Call isVowels function and store the value
        //Using string index
        /*
        if (isVowel(s[i]) == true)
            num_vowels++;
        */

        //Using at()
        if (isVowel(s.at(i)) == true)
            num_vowels++;
    }
    //Return the counter
    return num_vowels;
}

//This function returns true/false if the character is a vowel or not
bool isVowel(char c)
{
    //Return true if the character is a vowel
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    //Return false if not a vowel
    else
        return false;
}
