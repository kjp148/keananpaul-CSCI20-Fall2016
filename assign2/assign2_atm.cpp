#include <iostream>
using namespace std;

class atmFunctions {
  public:
  
  void menu() {
    int functionChoice = 0;
    double money = 0.0;
    while (functionChoice != 4) {
      cout << endl << "Please type with number you would like to use:  1.[Deposit]  2.[Withdraw]  3.[Print Statement]  4.[Exit]" << endl;
      cin >> functionChoice;
    
      switch (functionChoice) {
        case 1: cout << "How much would you like to deposit?   ";
                cin >> money;
                deposit(money);
                money = 0.0;
                break;
                
        case 2: cout << "How much would you like to withdraw?  ";
                cin >> money;
                withdraw(money);
                money = 0.0;
                break;
              
        case 3: printStatement();
                break;
                
        case 4: cout << "Bye";
                return;
      }
    }
  }
  
  private: 
  
  double accountBalance = 0.0;
  double totalWithdraw = 0.0;
  double totalDeposit = 0.0;
    
  void deposit(double userNum) {
    accountBalance += userNum;
    totalDeposit += userNum;
  }
  
  void withdraw(double userNum) {
    accountBalance -= userNum;
    totalWithdraw += userNum;
  }
  
  void printStatement() {
    cout << "Total withdrawn: " << totalWithdraw << endl;
    cout << "Total deposit:   " << totalDeposit << endl;
    cout << "Total balance:   " << accountBalance << endl;
  }
};