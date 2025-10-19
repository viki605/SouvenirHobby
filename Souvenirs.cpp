//This program is for the hobby Souvenirs. It'll ask the user about things like:
//Favorite type of souvenir
//How many souvenirs they collect per trip
//Their favorite city/country for souvenirs

#include <iostream>
#include <string>
using namespace std;


int main() {
	//Declare variables to store user input
	string favoriteSouvenir;
	string favoritePlace;
	int souvenirsPerTrip;

	//Prompt the user for information
	cout << "What is your favorite type of souvenir? ";
	getline(cin, favoriteSouvenir); //allows places in the input

	cout << "How many " << favoriteSouvenir << " do you usually collect per trip? ";
	cin >> souvenirsPerTrip;
	cin.ignore(); //Clears the newline from the input buffer

	cout << "What is your favorite city or country for souvenirs? ";
	getline(cin, favoritePlace);

	//Perform a simple calculation
	int totalSouvenirsAfter5Trips = souvenirsPerTrip * 5;

	//Display a fun message combining inputs and calculation
	cout << "\nAwesome! You love collecting " << favoriteSouvenir
		<< " from " << favoritePlace << "!\n";
	cout << "If you collect " << souvenirsPerTrip
		<< " per trip, after 5 trips you'll have about "
		<< totalSouvenirsAfter5Trips << " " << favoriteSouvenir << "!\n";

	return 0;
}