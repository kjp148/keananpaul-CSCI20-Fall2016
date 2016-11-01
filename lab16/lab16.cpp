#include <iostream>
#include <string>
using namespace std;

void menuList() {
  cout << "                                          <Available Actions>                                                     " << endl;
  cout << " ________________________________________________________________________________________________________________ " << endl;
  cout << "|    [0] Eat cookie         $3.14    |    [1] Fly to moon        $42.00    |    [2] Flip car           $94.32    |" << endl;
  cout << "|____________________________________|_____________________________________|_____________________________________|" << endl;
  cout << "|    [3] Mate with locals   $456.89  |    [4] Program deathstar  $124.00   |    [5] Defy physics       $7323.50  |" << endl;
  cout << "|____________________________________|_____________________________________|_____________________________________|" << endl;
  cout << "|    [6] Spawn thunderbolt  $1.10    |    [7] Vacume ceiling     $43.50    |    [8] Shoot seagull      $234235.00|" << endl;
  cout << "|____________________________________|_____________________________________|_____________________________________|" << endl;
  cout << "|                                    |    [9] Swallow poster     $3234.65  |                                     |" << endl;
  cout << "|____________________________________|_____________________________________|_____________________________________|" << endl;
}

int main() {
  //Variables
  string menu[10];
  float menuPrice[10];
  int menuNum[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int invNum[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
  char userIn = '0';
  int userItem = 0;
  float totalCost = 0.0;
  
  menu[0] = "Eat cookie";         menuPrice[0] = 3.14;
  menu[1] = "Fly to moon";        menuPrice[1] = 42.00;
  menu[2] = "Flip car";           menuPrice[2] = 94.32;
  menu[3] = "Mate with locals";   menuPrice[3] = 456.89;
  menu[4] = "Program deathstar";  menuPrice[4] = 124.00;
  menu[5] = "Defy physics";       menuPrice[5] = 7323.50;
  menu[6] = "Spawn thunderbolt";  menuPrice[6] = 1.10;
  menu[7] = "Vacume ceiling";     menuPrice[7] = 43.50;
  menu[8] = "Shoot seagull";      menuPrice[8] = 234235.00;
  menu[9] = "Swallow poster";     menuPrice[9] = 3234.65;
  
  //Interaction
  while(userIn != 'q') {
  	menuList();
  	cout << endl << "Please pick an action (Enter q to quit): ";
  	cin >> userIn;
  	cout << endl;
  	userItem = userIn - 48; //Subtracting 48 from char gives correct ascii for integer.
  	
  	if(userItem < 10 && userItem > -1) {
  	  if(invNum[userItem] > 0) {
  	    cout << menu[userItem] << " selected." << endl << endl;
  	    menuNum[userItem] += 1;
  	    invNum[userItem] -= 1;
  	    totalCost += menuPrice[userItem];
  	  }
  	  else {
  	  	cout << "Out of stock." << endl << endl;
  	  }
  	}
  	
  	else if(userIn == 'q') {
  	  
  	}
  	
  	else {
  	  cout << "Incorrect input. Try again." << endl << endl;
  	}
  }
  
  for(int i = 0; i < 10; i++) {
  	cout << menu[i] << " selected " << menuNum[i] << " times." << endl;
  }
  cout << "Total price: $" << totalCost;
}