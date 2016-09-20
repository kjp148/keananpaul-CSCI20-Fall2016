#include <iostream>
#include <string>
using namespace std;

void chorus1(string num) {
  cout << "The ants go marching " << num << " by " << num;
  cout << ", hurrah, hurrah" << endl;
  cout << "The ants go marching " << num << " by " << num;
  cout << ", hurrah, hurrah" << endl;
  cout << "The ants go marching " << num << " by " << num;
  cout << endl;
}
void chorus2(string extra) {
  cout << "The little one stops to " << extra << endl;
  cout << "And they all go marching down to the ground" << endl;
  cout << "To get out of the rain, BOOM! BOOM! BOOM!" << endl << endl;
}

int main() {
  //Variables
  string song_num = "_";
  string song_extra = "_";
  
  //Output
  song_num = "one";
  song_extra = "suck his thumb";
  chorus1(song_num);
  chorus2(song_extra);
  
  song_num = "two";
  song_extra = "tie his shoe";
  chorus1(song_num);
  chorus2(song_extra);
  
  song_num = "three";
  song_extra = "climb a tree";
  chorus1(song_num);
  chorus2(song_extra);
  
  song_num = "four";
  song_extra = "shut the door";
  chorus1(song_num);
  chorus2(song_extra);
  
  song_num = "five";
  song_extra = "take a dive";
  chorus1(song_num);
  chorus2(song_extra);
  
  song_num = "six";
  song_extra = "pick up sticks";
  chorus1(song_num);
  chorus2(song_extra);
  
  song_num = "seven";
  song_extra = "pray to heaven";
  chorus1(song_num);
  chorus2(song_extra);
  
  song_num = "eight";
  song_extra = "shut the gate";
  chorus1(song_num);
  chorus2(song_extra);
  
  song_num = "nine";
  song_extra = "check the time";
  chorus1(song_num);
  chorus2(song_extra);
  
  song_num = "ten";
  song_extra = "say 'THE END'";
  chorus1(song_num);
  chorus2(song_extra);
}