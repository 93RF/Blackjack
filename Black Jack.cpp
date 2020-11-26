// TEJ 201
// If Problem #2
// Ahmed Ali

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <ctime>   
#include <cstdlib>

using namespace std;

int main (){
	
	// Making Things into variables
	int r, playerTotal, counter = 1, computerTotal, card1, card2, Pchoice, Cchoice = 90000, Lchoice = 2;
	char choice;
	
	// Starting up the randomizer
	srand(time(0));
	
	// Randomizing the cards
	card1 = r = (rand() % 10) + 1;
 	card2 = r = (rand() % 10) + 1;
 	
 	// Calculating player total
	playerTotal = card1 + card2;
	
	// Display of the cards
	cout << "\n Your cards are " << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 <<"\n                " << (char)186 << setw(2) << card1 << " " << (char)186 << "\n                " << (char)186 << "   " << (char)186<< "\n                " << (char)186 << "" << setw(2) << card1 << " " << (char)186 <<  "\n                " << (char)200 << (char)205 << (char)205 << (char)205 << (char)188;   
	cout << "\n and            " << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 << "\n                " << (char)186 << setw(2) << card2 << " " << (char)186 << "\n                " << (char)186 << "   " << (char)186<< "\n                " << (char)186 << "" << setw(2) << card2 << " " << (char)186 <<  "\n                " << (char)200 << (char)205 << (char)205 << (char)205 << (char)188 << "\n And Your Total Is " << playerTotal;
	
	// Randomizing the cards
	card1 = r = (rand() % 10) + 1;
 	card2 = r = (rand() % 10) + 1;
 	
 	// Calculating computer total
 	computerTotal = card1 + card2;	
	
	// Display of the cards
	cout << "\n\n The Cpu's cards are " << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 <<"\n                     " << (char)186 << setw(2) << card1 << " " << (char)186 << "\n                     " << (char)186 << "   " << (char)186<< "\n                     " << (char)186 << setw(2) << card1 << " " << (char)186 <<  "\n                     " << (char)200 << (char)205 << (char)205 << (char)205 << (char)188;   
	cout << "\n and                 " << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 << "\n                     " << (char)186 << setw(2) << "?" << " " << (char)186 << "\n                     " << (char)186 << "   " << (char)186<< "\n                     " << (char)186 << setw(2) << "?" << " " << (char)186 <<  "\n                     " << (char)200 << (char)205 << (char)205 << (char)205 << (char)188;
	
	// Ask for choice
	cout << "\n\n Would you like to take a hit? (Y/N) ";
	cin >> choice;
	
	// While loop for player to get cards
	while ( choice == 'Y' || choice == 'y' && Pchoice != 1 && playerTotal <= 21 && Lchoice != 1) {
	
		// Calculating and Randomizing cards
		card1 = r = (rand() % 10) + 1;
		playerTotal = playerTotal + card1;
	
		// Display of the cards
		cout << "\n You drew a     " << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 <<"\n                " << (char)186 << setw(2) << card1 << " " << (char)186 << "\n                " << (char)186 << "   " << (char)186<< "\n                " << (char)186 << "" << setw(2) << card1 << " " << (char)186 <<  "\n                " << (char)200 << (char)205 << (char)205 << (char)205 << (char)188 << "\n and your total is now " << playerTotal;
	
	// If player loses
	if ( playerTotal > 21 ){
		cout << "\n\n You Lose ";
		Lchoice = 1;
}
	// If player wins
	if ( playerTotal == 21 ){
		cout << "\n\n You Win! ";
		Lchoice = 1;
	}
	// Ask for choice
	if (Lchoice != 1){
		cout << "\n\n Would you like to take a hit? (Y/N) ";
		cin >> choice;
	}	
	
	// If choice is no
	if ( choice == 'N' || choice == 'n'){
		Pchoice = 1;
	}		
	
}
	// While loop for computer to get cards
	while ( computerTotal <= 21 && Cchoice != 1 && Lchoice != 1 && Pchoice != -1 ){
	
	// Artidicial intelligence
	if ( computerTotal <= 16){
	
	// Calculating and Randomizing cards
	card1 = r = (rand() % 10) + 1;
	computerTotal = computerTotal + card1;
	
	// Display of the cards
	cout << "\n Computer drew a" << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 <<"\n                " << (char)186 << setw(2) << card1 << " " << (char)186 << "\n                " << (char)186 << "   " << (char)186<< "\n                " << (char)186 << "" << setw(2) << card1 << " " << (char)186 <<  "\n                " << (char)200 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
	
}	// Artificial intelligence
	else if ( computerTotal >= 17)	
		Cchoice = 1;
	
	// If computer loses
	if ( computerTotal > 21 ){
	cout << "\n\n Computer Lose ";
	Pchoice = -1;
	
	// If computer wins
	if ( computerTotal == 21 ){
	cout << "\n\n Computer Win ";
	Pchoice = -1;


}
}
}

	if ( playerTotal > computerTotal && Pchoice != -1 && Lchoice != 1)
		cout << "\n Player Wins! ";
	if ( playerTotal < computerTotal && Pchoice != -1 && Lchoice != 1)
		cout << "\n Player Loses ";
	if ( playerTotal == computerTotal && Pchoice != -1 && Lchoice != 1)
		cout << "\n Tie ";
}

