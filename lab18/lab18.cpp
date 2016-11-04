#include <iostream>
#include <string>
using namespace std;

int main() {
  //Variables
  string user_first = " ";
  string user_last = " ";
  string user_temp = " ";
  string username = " ";
  char exit_char = 0;
  char name_check = 0;
  int user_entry = 0;
  
  while(name_check != 'q') {
  	
  	exit_char = 0;
    while(exit_char != 'q') {
      cout << "Please enter your first name: ";
      cin >> user_first;
    
      if(user_first.length() < 10) {
        exit_char = 'q';
      }
      else {
        cout << "Try again.  Needs to be less than 10 characters." << endl;
      }
    }
    
    exit_char = 0;
    while(exit_char != 'q') {
      cout << "Please enter your last name: ";
      cin >> user_last;
      
      if(user_last.length() < 20) {
      	exit_char = 'q';
      }
      else {
      	cout << "Try again.  Needs to be less than 20 characters." << endl;
      }
    }
    
  
  cout << endl << "Name: " << user_first << " " << user_last << endl;
  
  if(user_first == user_last) {
  	cout << endl << "First and last name cannot be the same. Try again." << endl;
  }
  else {
  	name_check = 'q';
  }
  
  }
  
  exit_char = 0;
  while (exit_char != 'q') {
  	user_entry = 0;
  	  	
  	cout << endl << "Enter the username you want (using number next to username)." << endl;
  	cout << "Username options:" << endl;
  	cout << "[1] " << user_first.at(0) << user_first.at(1) << user_last << endl;
  	cout << "[2] " << user_first << user_last << endl;
  	cout << "[3] " << user_first.at(0) << user_last << endl;
  	
  	cout << "Selection: ";
  	cin >> user_entry;
  	
  	cout << "Your username: ";
  	switch(user_entry) {
  	  case 1:
  	    cout << user_first.at(0) << user_first.at(1) << user_last << endl;
  	    exit_char = 'q';
  	    break;
  	  
  	  case 2:
  	    cout << user_first << user_last << endl;
  	    exit_char = 'q';
  	    break;
  	    
  	  case 3:
  	    cout << user_first.at(0) << user_last << endl;
  	    exit_char = 'q';
  	    break;
  	    
  	  default:
  	    cout << endl << "Oops. Incorrect entry. Try again." << endl;
  	    break;
  	}
  }
}