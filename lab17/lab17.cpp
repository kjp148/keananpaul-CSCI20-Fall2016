#include <iostream>
using namespace std;

int main() {
  //char user_first[11] = "          ";
  char user_first[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  //char user_last[21] = "                    ";
  char user_last[21] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  char exit_char = 0;
  int user_entry = 0;
  int length = 0;
  
  
  while(exit_char != 'q') {
  	cout << "Please enter your first name: ";
    cin >> user_first;
    
    for(length = 0; user_first[length] != 0; length++) { //Counts until it hits a space
    	
    }
    
  	if(length <= 10) {
      exit_char = 'q';
  	}
  	else {
  	  cout << "Try again.  Needs to be less than 10 characters" << endl;
  	}
  }
  
  exit_char = 0;
  while(exit_char != 'q') {
    cout << "Please enter your last name: ";
    cin >> user_last;
    
    for(length = 0; user_last[length] != 0; length++) { //Counts until it hits a space
    	
    }
    
  	if(length <= 20) {
      exit_char = 'q';
  	}
  	else {
  	  cout << "Try again.  Needs to be less than 10 characters" << endl;
  	}
  }
  
  cout << "Name: " << user_first << " " << user_last << endl;
  
  exit_char = 0;
  
  while (exit_char != 'q') {
  	
  	cout << "Enter the username you want (using number next to username)." << endl;
  	cout << "Username options:" << endl;
  	cout << "[1] " << user_first[0] << user_first[1] << user_last << endl;
  	cout << "[2] " << user_first << user_last << endl;
  	cout << "[3] " << user_first[0] << user_last << endl;
  	
  	cout << "Selection: ";
  	cin >> user_entry;
  	
  	cout << "Your username: ";
  	switch(user_entry) {
  	  case 1:
  	    cout << user_first[0] << user_first[1] << user_last << endl;
  	    exit_char = 'q';
  	    break;
  	    
  	  case 2:
  	    cout << user_first << user_last << endl;
  	    exit_char = 'q';
  	    break;
  	    
  	  case 3:
  	    cout << user_first[0] << user_last << endl;
  	    exit_char = 'q';
  	    break;
  	    
  	  default:
  	    cout << "Incorrect entry.  Try again." << endl;
  	    break;
  	}
  }
}