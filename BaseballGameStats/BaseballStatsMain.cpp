#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <OpenXLSX.hpp>
using namespace std;

int main() {
	string date_of_game;
	int plate_appearences;
	int walks;
	int singles;
	int doubles; 
	int triples;
	int homeruns;
	int rbis;
	int runs;
	int stolen_bases;
	int caugth_stealing;
	int strikeouts;
	int sac_bunts;
	int sac_flys;


	cout << "Date of Game" << endl;
	cin >> date_of_game;

	cout << "How many plate appearences did you have this game?" << endl;
	cin >> plate_appearences;

	cout << "How many walks did you have this game?" << endl;
	cin >> walks;

	cout << "How many singles doubles triples and homeruns did you have this game?" << endl;
	cin >> singles >> doubles >> triples >> homeruns;

	cout << "How many runs batted in this game?" << endl;
	cin >> rbis;

	cout << "How many runs scored this game?" << endl;
	cin >> runs;

	cout << "How many stolen bases this game?" << endl;
	cin >> stolen_bases;

	cout << "How many times caught stealing this game?" << endl;

	cout << "How many strikeouts this game?" << endl;
	cin >> strikeouts;

	cout << "How many sacrifice bunts and flys this game?" << endl;
	cin >> sac_bunts >> sac_flys;



	
	return 0;
}