#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  ifstream fin;
  ofstream fout;
  
  string acc_num[10] = {"", "", "", "", "", "", "", "", "", ""};
  string trans_date[10] = {"", "", "", "", "", "", "", "", "", ""};
  string trans_user[10] = {"", "", "", "", "", "", "", "", "", ""};
  float trans_money[10] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  int i = 0;


  fin.open("checkbook.txt");
  fout.open("bankData.txt");
  
  while(!fin.eof()) {
    getline(fin, acc_num[i], ':');
    getline(fin, trans_date[i], ':');
    getline(fin, trans_user[i], ':');
    fin >> trans_money[i];
    
    cout << setw(15) << setfill(' ') << acc_num[i];
    cout << " | ";
    cout << setw(4) << trans_date[i];
    cout << "|";
    cout << trans_user[i];
    cout << "|";
    cout << " $" << trans_money[i];
    cout << endl;
    
    i++;
  }




  fin.close();
  fout.close();

}