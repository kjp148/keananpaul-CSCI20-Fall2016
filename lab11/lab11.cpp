#include <iostream>
#include <string>
using namespace std;

int main() {
  //Variables
  const double PERSONAL_EXEMPTION = 3900.0;
  const double STANDARD_DEDUCTION = 6100.0;
  string name = "";
  string status = ""; //Marital Status
  double gross = 0.0; //Ammount made per year
  double gross_after = 0.0; //Gross after deductions
  double withheld = 0.0; //Tax amount withheld
  
  //Input
  cout << "Please enter your name: ";
  getline(cin, name);
  
  cout << "Please enter the total gross amount you made this year: $";
  cin >> gross;
  gross_after = gross - PERSONAL_EXEMPTION - STANDARD_DEDUCTION;
  
  cout << "Please enter the amount you were withheld: $";
  cin >> withheld;
  
  cout << "Please enter your marital status: ";
  cin >> status;
  
  switch(status) {
    case "married": //FIXME CHAR
    case "Married": //FIXME CHAR
      if(gross_after < 17851) {
      	gross_after -= gross_after * .10;
      }
      else if(gross_after > 17850 || gross_after < 72501) {
      	gross_after -= 1785;
      	gross_after -= gross_after * .15;
      }
      else {
      	gross_after -= 9982.50;
      	gross_after -= gross_after * .28;
      break;
      
    case "single": //FIXME CHAR
    case "Single": //FIXME CHAR
      if(gross_after < 8926) {
      	gross_after -= gross_after * 
      	
    
  }
  
}