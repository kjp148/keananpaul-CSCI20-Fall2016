#include <iostream>
#include <string>
using namespace std;

int main() {
  //Variables
  const double PERSONAL_EXEMPTION = 3900.0;
  const double STANDARD_DEDUCTION = 6100.0;
  string name = "";
  char status = 'a'; //Marital Status
  double gross = 0.0; //Ammount made per year
  double gross_after = 0.0; //Gross after deductions
  double withheld = 0.0; //Tax amount withheld
  double taken = 0.0;
  double owed = 0.0;
  double refund = 0.0;
  
  //Input
  cout << "Please enter your name: ";
  getline(cin, name);
  
  cout << "Please enter the total gross amount you made this year: $";
  cin >> gross;
  gross_after = gross - PERSONAL_EXEMPTION - STANDARD_DEDUCTION;
  
  cout << "Please enter the amount you were withheld: $";
  cin >> withheld;
  
  cout << "Please enter your marital status (enter m if married) (enter s if single): ";
  cin >> status;
  
  switch(status) {
    case 'm':
    case 'M':
      if(gross_after < 17851) {
      	taken += gross_after * .10;
      	gross_after -= gross_after * .10;
      }
      else if(gross_after > 17850 && gross_after < 72501) {
      	taken += 1785;
      	taken += gross_after * .15;
      	gross_after -= 1785;
      	gross_after -= gross_after * .15;
      }
      else {
      	taken += 9982.50;
      	taken += gross_after * .28;
      	gross_after -= 9982.50;
      	gross_after -= gross_after * .28;
      }
      break;
      
      
    case 's':
    case 'S':
      if(gross_after < 8926) {
      	taken += gross_after * .10;
      	gross_after -= gross_after * .10;
      }
      else if(gross_after > 8925 && gross_after < 36251) {
      	taken += 892.50;
      	taken += gross_after * .15;
      	gross_after -= 892.50;
      	gross_after -= gross_after * .15;
      }
      else if (gross_after > 36250 && gross_after < 87850) {
      	taken += 4991.25;
      	taken += gross_after * .75;
      	gross_after -= 4991.25;
      	gross_after -= gross_after * .25;
      }
      else {
      	taken += 17891.25;
      	taken += gross_after * .28;
      	gross_after -= 17891.25;
      	gross_after -= gross_after * .28;
      }
  }
  
  //Math
  if (taken < withheld) {
  	owed = withheld - taken;
  	refund = 0;
  }
  else if (taken > withheld) {
  	owed = 0;
  	refund = taken - withheld;
  }
  else {
  	owed = 0;
  	refund = 0;
  }
  
  //Output
  cout << "Name: " << name << endl << endl;
  cout << "Total Gross Adjusted Income: $" << gross << endl << endl;
  cout << "Total tax owed: $" << owed << endl << endl;
  cout << name << " is entitled to a refund of $" << refund << endl << endl;
}