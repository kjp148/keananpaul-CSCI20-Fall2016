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

class Computer {

private:

int player_score = 0;
int computer_score = 0;

int randGen() {
  int random_number = 0;
  srand((int)time(0));
  random_number = rand() % 3 + 1;
  return random_number;
}

public:

string computerMove() {
  int number = randGen();
  string move = 0;
  
  switch(number) {
  
    case 1:
    move = "Rock";
    case 2:
    move = "Paper";
    case 3:
    move = "Scissors";
  }  
  return move;
}

void keepScore(int player, int computer) {
  player_score += player;
  computer_score += computer;
}

desision(int player_move, int computer_move) {
  switch(player_move) {
    case 1:
      if(computer_move == 1) {
        
      }
    }
  }
};