#include <iostream>
#include <string>
#include "assign3_class.cpp"
using namespace std;

/* HEADER
   
   Author: Keanan Paul
   Date:   10/13/16
   Description:
   "This program is a game of Rock, Paper, Scissors
   between a player and the computer."
*/

int main() {
  Game game1;
  
  string choice = "";
  string winner = "";
  string comp_move = "";
  string match_winner = "";
  int i = 0;
  
  while (i != 1) {
  	cout << "Lets play. Enter [Rock] [Paper] [Scissors].  Enter [Quit] to quit." << endl;
  	cin >> choice;
  	
  	if (choice == "Rock" || choice == "Paper" || choice == "Scissors") {
  	  
  	  comp_move = game1.computerMove();
  	  cout << "Computer chooses: " << comp_move << endl;
  	  winner = game1.decision(choice, comp_move);
  	  cout << "This rounds winner is: " << winner << endl;
  	  cout << endl << "Current score:" << endl;
  	  cout << "Computer: " << game1.getCompScore() << endl;
  	  cout << "Player:   " << game1.getPlayScore() << endl << endl;
  	}
  	else if (choice == "Quit") {
  	  i = 1;
  	  cout << "Final scores:" << endl;
  	  cout << "Computer: " << game1.getCompScore() << endl;
  	  cout << "Player:   " << game1.getPlayScore() << endl << endl;
  	}
  	else {
  	  cout << "Incorrect input. Please use the given format." << endl << endl;
  	}
  }
  
  if(game1.getPlayScore() > game1.getCompScore()) {
   	match_winner = "Player";
  }
  else if (game1.getCompScore() > game1.getPlayScore()) {
  	match_winner = "Computer";
  }
  else {
  	match_winner = "Nobody";
  }
  cout << "Match winner: " << match_winner;
  
}