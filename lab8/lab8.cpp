#include <iostream>
using namespace std;

double toKilo(double poundWeight) {
  double kiloReturn = 0.0;
  kiloReturn = poundWeight / 2.2;
  
  return kiloReturn;
}

double toPounds(double kiloWeight) {
  double poundReturn = 0.0;
  poundReturn = kiloWeight * 2.2;
  
  return poundReturn;
}

int main() {
  //Variables
  double userNum = 0.0;
  double converted = 0.0;
  
  //Pounds input
  cout << "Please enter amount in pounds: ";
  cin >> userNum;
  
  //Kilo output
  converted = toKilo(userNum);
  cout << "In Kilos: " << converted << endl << endl;
  
  //Kilo input
  cout << "Please enter amount in kilograms: ";
  cin >> userNum;
  
  //Pounds output
  converted = toPounds(userNum);
  cout << "In Pounds: " << converted << endl;
}