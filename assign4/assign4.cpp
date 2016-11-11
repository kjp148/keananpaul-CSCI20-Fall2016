#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  ifstream fin;
  ofstream fout;
  
  string trans_num[10] = {"", "", "", "", "", "", "", "", "", ""};
  string trans_date[10] = {"", "", "", "", "", "", "", "", "", ""};
  string trans_user[10] = {"", "", "", "", "", "", "", "", "", ""};
  float trans_money[10] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  float acc_total = 0.0;
  int i = 0; //Trans count
  int j = 0; //Total calc helper
  int k = 0; //Starting line space remover


  fin.open("checkbook.txt");
  fout.open("bankData.txt");
  
  //Title bar
  cout << "Trans #  | Date  |    Location     |  Amount" << endl;
  cout << "--------------------------------------------" << endl;
  
  while(!fin.eof()) {
    getline(fin, trans_num[i], ':');
    getline(fin, trans_date[i], ':');
    getline(fin, trans_user[i], ':');
    fin >> trans_money[i];
    

    //
    //For some reason this is required to not print an extra space at the beginning.
    if(k == 1) {
      cout << setw(9) << left << setfill(' ') << trans_num[i];
    }
    else {
      cout << setw(8) << left << setfill(' ') << trans_num[i];
      k = 1;
    }
    cout << " | ";
    cout << setw(5) << right << setfill(' ') << trans_date[i];
    cout << " | ";
    cout << setw(15) << left << trans_user[i];
    cout << " | ";
    cout << "$" << setprecision(2) << fixed << trans_money[i];
    cout << endl;
    
    //File printing
    if(k == 1) {
      fout << setw(9) << left << setfill(' ') << trans_num[i];
    }
    else {
      fout << setw(8) << left << setfill(' ') << trans_num[i];
      k = 1;
    }
    fout << " | ";
    fout << setw(5) << right << setfill(' ') << trans_date[i];
    fout << " | ";
    fout << setw(15) << left << trans_user[i];
    fout << " | ";
    fout << "$" << setprecision(2) << fixed << trans_money[i];
    fout << endl;
    
    i++;
  }
  

  //Account balance.
  for(j = 0; j < i; j++) {
    if(trans_num[j] == "deposit") {
      acc_total += trans_money[j];
    }
    else {
      acc_total -= trans_money[j];
    }
  }
  

  cout << endl << endl << setprecision(2) << fixed << "Total balance: $" << acc_total;
  
  fout << endl << endl << setprecision(2) << fixed << "Total balance: $" << acc_total;


  fin.close();
  fout.close();

}