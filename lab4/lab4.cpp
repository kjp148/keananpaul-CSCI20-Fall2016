#include <iostream>
using namespace std;

int main() {
  
  //Variables
  int num_dollars = 0;
  int num_quarters = 0;
  int num_dimes = 0;
  int num_nickels = 0;
  int num_pennies = 0;
  int cents = 0;
  
  //User Input
  cout << "[COINSTAR]: Welcome to CoinStar!" << endl;
  cout << "[COINSTAR]: Enter how many cents you wish to exchange: ";
  cin >> cents;
  
  //Math
  
  num_dollars = cents / 100;
  cents %= 100;
  
  num_quarters = cents / 25;
  cents %= 25;
  
  num_dimes = cents / 10;
  cents %= 10;
  
  num_nickels = cents / 5;
  cents %= 5;
  
  num_pennies = cents / 1;
  cents %= 1;
  
  //Output
  //cout << "[COINSTAR]: We are taking: " << (cents * .109) << " Cents";
  //cents = cents * .891;
  cout << "[COINSTAR]: You will receive:" << endl;
  cout << "            (" << num_dollars << ")" << " $1 bills." << endl;
  cout << "            (" << num_quarters << ")"  << " quarters." << endl;
  cout << "            (" << num_dimes << ")"  << " dimes." << endl;
  cout << "            (" << num_nickels << ")"  << " nickels." << endl;
  cout << "            (" << num_pennies << ")"  << " pennies." << endl;
  
  return 0;
}