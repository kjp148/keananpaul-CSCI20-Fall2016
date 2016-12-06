#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "assign5functions.cpp"
using namespace std;

/* HEADER
   
   Author: Keanan Paul
   Date Created: 11/14/2016
   
 */

int main()
{
  Functions funct;

  string username     = "";
  string password     = "";
  string usernameFile = "journals/";
  bool   journalExit  = false;
  bool   fileExists   = false;
  
  ifstream fin;
  ofstream fout;
  
  while(!journalExit)
  {
    cout << "Enter username: ";
    cin >> username;
    
    fileExists = funct.fileCheck(username, usernameFile); //Checks for file existance and sets username file correctly.
    
    if(fileExists == true)
    {
      cout << "File found." << endl;
      cout << "Please enter your password: ";
      cin >> password;
      
      if(funct.passCheck(password, usernameFile) == true)
      {
        fin.open(usernameFile);
        cout << "Password Correct." << endl;
      }
      else
      {
        cout << "Incorrect Password.  Try again." << endl << endl;
      }
    }
    else
    {
      usernameFile = "journals/"; //Sets usernameFile back to folder path.
      
      if(username == "Exit" || username == "exit")
      {
        cout << "Exiting...";
        journalExit = true;
      }
      else if(username == "New" || username == "new")
      {
        cout << "Enter the username you would like to use for this journal" << endl;
        cout << "New Username: ";
        cin >> username;
        
        fileExists = funct.fileCheck(username, usernameFile);
        
        if(fileExists == true)
        {
          cout << "A file already exists for this username.  Try again." << endl;
          usernameFile = "journals/"; //Sets usernameFile back to folder path.
        }
        else
        {
          fout.open(usernameFile);
          fout << "<~~Begin Header~~>" << endl;
          fout << "Username: " << username << endl;
          cout << "File created." << endl;
          cout << "Please enter a password for this file" << endl;
          cout << "New Password: ";
          cin >> password;
          fout << "Password: " << password << endl;
          fout << "<~~End Header~~>" << endl << endl;
          usernameFile = "journals/"; //Sets usernameFile back to folder path.
        }
      }
      else
      {
        cout << "It looks like a file may not exist for username: " << username << endl;
        cout << "If you think this file should exist.  Carefully retype your username" << endl;
        cout << "If you would like to create a new journal. ";
        cout << "Type 'New' when asked for username" << endl;
      }
    }
  }
}