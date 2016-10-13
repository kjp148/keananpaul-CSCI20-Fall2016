#include <iostream>
#include <string>
using namespace std;

/* COMMENTS

   I don't remember what the flowchart
   was so I'm making my own.
*/

int main() {
  char answer = 0;
  
  cout << "Do you have time to get coffee? (y/n): ";
  cin >> answer;
  
  if(answer = 'y') {
  	cout << "Do you like coffee? (y/n): ";
  	cin >> answer;
  	
  	switch(answer) {
  		
  	  case 'y':
  	  cout << endl << "Get coffee.";
  	  
  	  case 'n':
  	  cout << endl << "Get coffee.";
  	}
  	
  }
  else if(answer == 'n') {
   	cout << "Do you like coffee? (y/n): ";
  	cin >> answer;
  	
  	switch(answer) {
  		
  	  case 'y':
  	  cout << endl << "Get coffee.";
  	  
  	  case 'n':
  	  cout << endl << "Get coffee.";
  	}
  	
  }
  else {
  	cout << endl << "Wrong input..... WHATEVER. GET COFFEE";
  }

}