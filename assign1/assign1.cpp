#include <iostream>
#include <string>
using namespace std;

/* HEADER

  Name:  Keanan Paul
  Class: CSCI 20
  Proj:  Assignment 1
  
*/
/* PSEUDOCODE

  Create variables
  Take input from user: [Name] [hours] [pay rate]
  Calculate taxes
  Output info

*/

int main() {

  //Variables
  string name = "";
  float hours = 0.0;
  float pay = 0.0;
  float gross = 0.0;
  float net = 0.0;

  //Input
  cout << "Please enter your full name: ";
  getline(cin, name);
  
  cout << "Please enter your hours per week: ";
  cin >> hours;
  
  cout << "Please enter your hourly pay rate: ";
  cin >> pay;
  
  //Math
  gross = hours * pay;
  net = gross - (gross * 0.17); //Tax calc
  
  //Output
  cout << "Your gross pay is: $" << gross << " per week." << endl;
  cout << "Your net pay is: $" << net << " per week." << endl;
  
  

}