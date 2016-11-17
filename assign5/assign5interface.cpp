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
    
    /* <~~File Check~~> */
    usernameFile += username;
    fin.open(usernameFile);
    if(fin.is_open())
    {
      fileExists = true;
    }
    else
    {
      fileExists = false;
      usernameFile = "journals/";
    }
    /* <~~End File Check~~> */
    
    if(fileExists == true)
    {
      cout << "File found." << endl;
    }
    else
    {
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
        
        /* <~~File Check~~> */
        usernameFile += username;
        fin.open(usernameFile);
        if(fin.is_open())
        {
          fileExists = true;
        }
        else
        {
          fileExists = false;
          usernameFile = "journals/";
        }
        fin.close();
        /* <~~End File Check~~> */
        
        if(fileExists == true)
        {
          cout << "A file already exists for this username.  Try again." << endl;
        }
        else
        {
          fout.open(usernameFile);
          //FIXME: File not creating
          fout << "Username: " << username << endl;
          cout << "Please enter a password for this file" << endl;
          cout << "New Password: ";
          cin >> password;
          fout << "Password: " << password << endl;
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