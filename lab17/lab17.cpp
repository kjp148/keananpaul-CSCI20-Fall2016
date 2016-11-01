#include <iostream>
#include <string>
using namespace std;

int main() {
  string user_first[11];
  string user_last[21];
  char exit_char = 0;
  
  user_first = "          ";
  user_last = "                    ";
  
  while(exit_char != 'q') {
  	cout << "Please enter your first name: ";
    cin >> user_first;
  	if((sizeof(user_first)/sizeof(*user_first)) < 10) {
      exit_char = 'q';
  	}
  	else {
  	  cout << "Try again.  Needs to be less than 10 characters" << endl;
  	}
  }
  
  while(exit_char != 'q') {
    cout << "Please enter your last name: ";
    cin >> user_last;
  	if((sizeof(user_first)/sizeof(*user_first)) < 10) {
      exit_char = 'q';
  	}
  	else {
  	  cout << "Try again.  Needs to be less than 10 characters" << endl;
  	}
  }
  
}