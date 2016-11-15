#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "assign5class.cpp"
using namespace std;

/* HEADER
   
   Author: Keanan Paul
   Date Created: 11/14/2016
   
*/

int main()
{

  string username = "";
  string password = "";
  
  ifstream fin;
  ofstream fout;
  
  while(!journalExit)
  {
    cout << "Enter username: ";
    cin >> username;
    
    if(username == "Exit" || username == "exit")
    {
      cout << "Exiting...";
    }
    else
    {
    fin.open(username);
      if(fin.is_open(username)) {
      	
      }
    }
    
  }
}