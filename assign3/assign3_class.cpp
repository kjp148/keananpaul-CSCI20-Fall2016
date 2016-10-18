#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

/* PSEUDOCODE
   
   #include stdlib
   #include time
   namespace: standard
   
   class Computer {
   
   private:
   randGen() {
     generate random number
     random %= 3
     random += 1
     return random number
   }
   
   moveType() {
     retrieve number from randGen()
     switch(number) {
     
       case 1: Rock
       case 2: Paper
       case 3: Scissors
     }  
     return move
   }
   
   score(player, computer) {
     player_score += player;
     computer_score += computer;
   }
   
   desision(player_move, computer_move) {
     switch(player_move) {
       case 1:
         if(computer_move == 1) {
           tie
         }
     }
   }
   }
*/

class Game {

private:

int player_score = 0;
int computer_score = 0;
int gen_move = 0;

int randGen() { //Generates the random number for the computers move.
  int random_number = 0;
  srand((int)time(0));
  random_number = rand() % 3 + 1;
  return random_number;
}

public:

string computerMove() { //Converts random number to appropriate move.
  gen_move = randGen();
  string move = "";
  
  switch(gen_move) {
  
    case 1:
    move = "Rock";
    break;
    case 2:
    
    move = "Paper";
    break;
    
    case 3:
    move = "Scissors";
    break;
  }  
  return move;
}

string decision(string player_move, string computer_move) { //Decides which player won the round.
  string winner = "";
  	
  if (player_move == "Rock") {
    if(computer_move == "Rock") {
      winner = "Nobody";
    }
    else if(computer_move == "Paper") {
      winner = "Computer";
      computer_score++;
    }
    else {
      winner = "Player";
      player_score++;
    }
  }
    
  else if (player_move == "Paper") {
    if(computer_move == "Rock") {
      winner = "Player";
      player_score++;
    }
    else if(computer_move == "Paper") {
      winner = "Nobody";
    }
    else {
      winner = "Computer";
      computer_score++;
    }
  }
      
  else { //Player scissors start
    if(computer_move == "Rock") {
      winner = "Computer";
      computer_score++;
    }
    else if(computer_move == "Paper") {
      winner = "Player";
      player_score++;
    }
    else {
      winner = "Nobody";
    }
  } //Player scissors end
    
  return winner;
}

int getCompScore() {
  return computer_score;
}

int getPlayScore() {
  return player_score;
}

};