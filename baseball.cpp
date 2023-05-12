*
  Name: Jian Hao Tang
  Date: 05-09-2023
  Program baseball: This program reads in two files, roster and player statistics,
  and sort the roster using player numbers. Then display the players' names along 
  with their stats using a table in an output file.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstring>
using namespace std;

//structure to hold player info
struct PlayerInfo {

	int PlayerID;
	string LastName,
		   FirstName;
	int Hits,
		Walks,
		Outs;
	double Batting,
		OnBase;
};

//declare function prototypes
int GetPlayer(PlayerInfo[]); //DONE
void PrintRoster(PlayerInfo[], ofstream&, int); //DONE
void SortPlayer(PlayerInfo[]);
void GetStatistics(PlayerInfo[]);
void CalcAverages(PlayerInfo[]);
void PrintStats(PlayerInfo[], ofstream&, int);

int main() {

	//array to hold each players' info
	PlayerInfo Player[20];

	//create and open output file
	ofstream out;
	out.open("output.txt");

	//call GetPlayer to read in players from file
	int year = GetPlayer(Player);

	//call PrintRoster to display list of players to output
	PrintRoster(Player, out, year);

	//call SortPlayer to sort players by last name
	SortPlayer(Player);

	//call GetStatistics to read in stats from file
	GetStatistics(Player);

	//call CalcAverages to calculate batting, onbase, 
	//and store in array
	CalcAverages(Player);

	//call PrintStats to display batting, onbase average, on Disabled
	//List, best hitter, worst hitter, best base runner, worst base
	//runner
	PrintStats(Player, out, year);

	//close output file;
	out.close();

	cout << "done" << endl;

	return 0;
}
/*
-------------------------
|       GetPlayer       |
-------------------------
*/

//read Roster file and store player names in array
//return the year for the season
int GetPlayer(PlayerInfo Player[]) { //DONE

	//open roster file
	ifstream roster;
	roster.open("Roster.txt");

	//counter for name
	int num_names = 0;

	//check file
	if (!roster) {
		cout << "error opening file, please try again" << endl;
	}

	//read in current season year
	int year;
	roster >> year;

	//read in values
	while (roster >> Player[num_names].LastName >> Player[num_names].FirstName) {
		//assign playerID
		Player[num_names].PlayerID = num_names;
		//increment number of names
		num_names++;
	}

	//check file if empty
	if (num_names == 0) {
		cout << "file is empty" << endl;
	}

	//close roster file
	roster.close();

	return year;
}

/*
--------------------------
|      PrintRoster       |
--------------------------
*/

//print roster in order with player ID to output
void PrintRoster(PlayerInfo Player[], ofstream &out, int year) { //done
	const int SIZE = 20;

	out << "-----------------------------" << endl;
	out << "|   Baseball Season " << year <<  "    | " << endl;
	out << "-----------------------------" << endl;
	out << left << setw(8) << "LastName" << " " << setw(8) << "FirstName" << setw(8) << " Player # " << endl;
	out << endl;
	for (int name = 0; name < SIZE; name++) {
		out << left << setw(8) << Player[name].LastName << " " << setw(9) << Player[name].FirstName << setw(6) << " Player " << setw(2) << Player[name].PlayerID << endl;
	}
	out << endl;
}

/*
--------------------------
|      SortPlayer        |
--------------------------
*/

//sort players by last name
void SortPlayer(PlayerInfo Player[]) {
	const int SIZE = 20;

	//using selection sort
	for (int i = 0; i < SIZE - 1; i++) { //starting index
		int min = i;
		for (int j = i + 1; j < SIZE; j++) { //compare to the next index
			if (Player[j].LastName < Player[min].LastName) {
				min = j;
			}
		}
		//do the swap
		PlayerInfo temp = Player[i];
		Player[i] = Player[min];
		Player[min] = temp;
	}
}

/*
--------------------------
|      GetStatstics      |
--------------------------
*/

//read Statistics file to update hits, walks, and outs
void GetStatistics(PlayerInfo Player[]) {
	//open statistics file
	ifstream stat;
	stat.open("Statistic.txt");

	//check file
	if (!stat) {
		cout << "error opening file, please try again" << endl;
	}

	//read in stats
	int ID, H, W, O;

	//counter for name
	int stats = 0;

	while (stat >> ID >> H >> W >> O) {
		if (ID == Player[stats].PlayerID) {
			Player[stats].Hits += H;
			Player[stats].Walks += W;
			Player[stats].Outs += O;
		}
		stats++;
	}

	if (stats == 0) {
		cout << "file is empty" << endl;
	}

	//close roster file
	stat.close();
}

/*
--------------------------
|      CalcAverages      |
--------------------------
*/

//calculate the batting and onbase average
void CalcAverages(PlayerInfo Player[]) {
	const int SIZE = 20;
	for (int i = 0; i < SIZE; i++) {
		Player[i].Batting = double(Player[i].Hits) / (Player[i].Hits + Player[i].Outs);
		Player[i].OnBase = double(Player[i].Hits + Player[i].Walks) / (Player[i].Hits + Player[i].Walks + Player[i].Outs);
	}
}

/*
--------------------------
|        PrintStats      |
--------------------------
*/

//print player stats to output: batting average, onbase average,
//disabled list, best hitter, worst hitter, best base runner,
//worst base runner
//print out each players' name if there are ties
void PrintStats(PlayerInfo Player[], ofstream& out, int year) {
	out << "------------------------------------------------------------------------------------------------------------------" << endl;
	out << "|  Player Statistics with their total hits, total walks, total outs, batting and onbase average for season " << year << "  |" << endl;
	out << "------------------------------------------------------------------------------------------------------------------" << endl;
	out << left << setw(16) << "Player" << setw(10) << "Number" << setw(10) << "Hits" << setw(10) << "Walks" << setw(10) << "Outs" << setw(20) << "Batting Average" << setw(20) << "OnBase Average" << setw(20) << "In Disable List" << endl;
	out << "------------------------------------------------------------------------------------------------------------------" << endl;


}
