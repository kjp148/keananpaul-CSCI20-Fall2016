#include "assign5interface.h"

/* HEADER
   
   Author: Keanan Paul
   Date Created: 11/14/2016
   
 */
/* CREDIT
   
   <Date and time>
   http://www.cplusplus.com/reference/chrono/system_clock/now/
   
   <Password check fix>
   Solution found from user: "rcs"
   At: <http://stackoverflow.com/questions/28163723/c-how-to-get-substring-after-a-character>
   
   
 */

int main()
{
  Functions funct;
  
  const string LINE_SEPERATOR = "_____________________________________________________________________";

  string username      = "";          //
  string password      = "";          //
  string usernameFile  = "journals/"; //Used for file path
  string datePath      = "[Date: ";   //Used for journal date search path
  string currentTime   = "";          //
  string lineCheck     = "";          //Used for checking lines in a file for journal dates
  string journalChoice = "";          //
  string journalDate   = "";          //
  string journalEntry  = "";          //
  bool   programExit   = false;       //
  bool   journalExit   = false;       //
  bool   fileExists    = false;       //
  bool   entryFound    = false;       //
  bool   entryExit     = false;       //Used for exiting journal entry mode.
  int    currentMinute = 0;           //
  int    currentHour   = 0;           //
  int    currentDay    = 0;           //
  int    currentMonth  = 0;           //
  int    currentYear   = 0;           //
  string currentFrame  = "";          //
  
  ifstream fin;                       //File stream in object
  ofstream fout;                      //File stream out object
  
  while(!programExit)
  {
    usernameFile = "journals/"; //Sets usernameFile back to folder path.
    
    cout << "Enter username: ";
    cin >> username;
    
    fileExists = funct.fileCheck(username, usernameFile); //Checks for file existance and sets username file correctly.
    
    /*<~~Begin existing username path~~>*/
    if(fileExists == true)
    {
      cout << "File found." << endl;
      cout << "Please enter your password: ";
      cin >> password;
      
      if(funct.passCheck(password, usernameFile) == true)
      {
        cout << "Password Correct." << endl;
        
        while(journalExit != true)
        {
          journalDate = ""; //Resets journalDate
          journalChoice = ""; //Resets journalChoice
          
          cout << "Select one of the below options:" << endl;
          cout << "[Open] Open old journal entries ";
          cout << "| [Create] Create new journal entry ";
          cout << "| [Close] Go back to login" << endl;
          cin >> journalChoice;
          
          if(journalChoice == "Open" || journalChoice == "open")
          {
            fin.open(usernameFile);
            
            cout << "Enter the date of the journal entry you are looking for. Format: MM/DD/YYYY" << endl;
            cout << "(Or type 'All')" << endl;
            
            cin >> journalDate;
            
            if(journalDate == "All" || journalDate == "all")
            {
              while(fin.eof() != true)
              {
                getline(fin, lineCheck);
                
                if(lineCheck.find("[Date: ") != string::npos)
                {
                  cout << endl << endl << lineCheck << endl;
                  cout << LINE_SEPERATOR << endl;
                  
                  while(lineCheck != "<~~End Journal Entry~~>") //Stops geting journal lines when end tag is reached.
                  {
                    getline(fin, lineCheck);
                    
                    if(lineCheck.find("<~~Begin Journal Entry~~>") != string::npos || lineCheck.find("<~~End Journal Entry~~>") != string::npos) //Makes sure begin and end tag aren't printed
                    {
                      //Nothing
                    }
                    else
                    {
                      cout << lineCheck << endl;
                    }
                    
                  }
                  
                  cout << LINE_SEPERATOR << endl << endl;
                  
                }
              }
              fin.close();
            }
            
            else
            {
              datePath = "[Date: "; //Resets datePath
              
              datePath = datePath + journalDate + "]";
              
              while(fin.eof() != true)
              {
                
                getline(fin, lineCheck);
                
                if(lineCheck.find(datePath) != string::npos)
                {
                  entryFound = true;
                  
                  cout << endl << lineCheck << endl; //Makes sure to print date and time of entry.
                  
                  cout << LINE_SEPERATOR << endl;
                  
                  while(lineCheck != "<~~End Journal Entry~~>") //Stops geting journal lines when end tag is reached.
                  {
                    getline(fin, lineCheck);
                    
                    if(lineCheck.find("<~~Begin Journal Entry~~>") != string::npos || lineCheck.find("<~~End Journal Entry~~>") != string::npos) //Makes sure begin and end tag aren't printed
                    {
                      //Nothing
                    }
                    else
                    {
                      cout << lineCheck << endl;
                    }
                    
                  }
                cout << LINE_SEPERATOR << endl << endl;
                }
                
              }
              
              if(entryFound == false)
              {
                cout << "No entry for this date found." << endl;
              }
              entryFound = false;
              fin.close();
            }
          }
          else if(journalChoice == "Create" || journalChoice == "create")
          {
            //currentTime = funct.timeRetrieval(); /* POSSIBLY FIX. FOR NOW USING MANUAL TIME*/
            
            //Variable resets:
            currentMinute = 0;
            currentHour   = 0;
            currentDay    = 0;
            currentMonth  = 0;
            currentYear   = 0;
            currentFrame  = "";
            
            cout << "Enter current hour: ";
            cin >> currentHour;
            cout << "Enter current minutes: ";
            cin >> currentMinute;
            cout << "Enter am/pm: ";
            cin >> currentFrame;
            cout << "Enter current date in format (MM DD YYYY): "; //FIXME: CHECK
            cin >> currentMonth;
            cin >> currentDay;
            cin >> currentYear;
            
            cout << "[Date: " << currentMonth << "/" << currentDay;
            cout << "/" << currentYear << "] ";
            cout << "[Time: " << currentHour << ":" << currentMinute;
            cout << currentFrame << "]" << endl;
            
            fout.open(usernameFile, ios::app);
            
            fout << "[Date: " << currentMonth << "/" << currentDay;
            fout << "/" << currentYear << "] ";
            fout << "[Time: " << currentHour << ":" << currentMinute;
            fout << currentFrame << "]" << endl;
            fout << "<~~Begin Journal Entry~~>" << endl;
            
            cout << endl << "Type your entry line by line." << endl;
            cout << "When you are finished create a new line, type 'exit', and hit [enter]" << endl << endl;
            cout << "                       Entering entry mode....                      " << endl;
            cout << LINE_SEPERATOR << endl;
            
            while(entryExit == false)
            {
              getline(cin, journalEntry);
              if(journalEntry == "Exit" || journalEntry == "exit")
              {
                entryExit = true;
                cout << LINE_SEPERATOR << endl;
                cout << "               Entry finished.  Exiting entry mode....               " << endl << endl;
              }
              else
              {
                fout << journalEntry << endl;
              }
              journalEntry = ""; //Variable reset.
            }
            
            entryExit = false; //Variable reset.
            fout << endl << "<~~End Journal Entry~~>" << endl << endl;
            fout.close();
            
          }
          else if(journalChoice == "Close" || journalChoice == "close")
          {
            journalExit = true;
          }
          else
          {
            cout << "Incorrect entry. Try entry again." << endl;
          }
        }
        journalExit = false; //Resets journalExit
        
      }
      else
      {
        cout << "Incorrect Password.  Try again." << endl << endl;
      }
    }
    /*<~~End existing username path~~>*/
    
    /*<~~Begin alternate entry path~~>*/
    else
    {
      usernameFile = "journals/"; //Sets usernameFile back to folder path.
      
      if(username == "Exit" || username == "exit")
      {
        cout << "Exiting...";
        programExit = true;
      }
      
      /*<~~Begin entry for new journal~~>*/
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
          fout.close();
        }
      }
      /*End entry for new journal~~>*/
      
      /*<~~Begin incorrect entry statement~~>*/
      else
      {
        cout << "It looks like a file may not exist for username: " << username << endl;
        cout << "If you think this file should exist.  Carefully retype your username" << endl;
        cout << "If you would like to create a new journal, ";
        cout << "type 'New' when asked for username" << endl;
      }
      /*<~~End incorrect entry statement~~>*/
    }
    /*<~~End alternate entry path~~>*/
  }
}