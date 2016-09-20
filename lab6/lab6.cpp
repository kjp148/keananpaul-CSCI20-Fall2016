#include <iostream>
#include <string>
using namespace std;
/*
TITLE: Sea of tears
*/
void asciiOutput(string name, int year) {
  cout << endl;
  cout << "             Sea of tears               " << endl << endl;
  cout << "                _    _                  " << endl;
  cout << "               '  ()  '                 " << endl;
  cout << "              '  ____  '                ";
  cout << "   Copyright " << name << ", " << year << endl;
  cout << "              '        '                " << endl;
  cout << "mmmmmmmmmmmmmmMmmmmmmmmMmmmmmmmmmmmmmmmm";
}

int main() {
  //Variables
  string user_name = "_";
  int user_year = 0;
  
  //Input
  cout << "Please enter your name: ";
  getline(cin, user_name);
  cout << "Please enter the current year: ";
  cin >> user_year;
  
  //Output
  asciiOutput(user_name, user_year);
}