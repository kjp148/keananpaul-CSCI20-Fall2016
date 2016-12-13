#include "assign5functions.h"

/* These were used for auto time but that didn't work out */
//#include <sstream>  //Used for string stream buffers
//#include <ctime>    //Used for time and date
//#include <chrono>   //Used for time and date
//#include <ratio>    //Used for creating ratio's
//#include <vector>   //Used for vectors

class Functions
{  
  public:
    
    /*<~~Begin File Check~~>*/
    bool fileCheck(string _username, string &usernameFile)
    {
      ifstream fin;
      ofstream fout;
      
      bool _fileExists = false;
      
      usernameFile += _username;
      fin.open(usernameFile);
      if(fin.is_open())
      {
        _fileExists = true;
      }
      else
      {
        _fileExists = false;
      }
      
      return _fileExists;
    }
    /*<~~End File Check~~>*/
    
    /*<~~Begin Password Check~~>*/
    bool passCheck(string _password, string _usernameFile)
    {
      ifstream fin;
      ofstream fout;
      
      bool results = false;
      bool exitLoop = false;
      bool fileError = false;
      string line = "";
      string passPart = "";
      
      fin.open(_usernameFile);
      
      while (fin.eof() != true && exitLoop != true)
      {
        getline(fin, line);
        
        if (line.find("Password: ") != string::npos)
        {
          passPart = line.substr(line.find(":") + 2); //Solution referenced in assign5interface.cpp
          
          if(passPart == _password) //Checks if password entered is equal to passPart
          {
            results = true;
            exitLoop = true;
          }
          
          fileError = false;
        }
        else
        {
          results = false;
          fileError == true;
        }
      }
      if(fileError == true)
      {
        cout << "File Error" << endl;
      }
      
      fin.close();
      
      return results;
    }
    /*<~~End Password Check~~>*/
    
/* POSSIBLY FIX.  CURRENTLY USING MANUAL TIME. */
    // /*<~~Begin Date/Time Retrieval~~>*/
    // string timeRetrieval()
    // {
    //   string seglist[10]   = "";
    //   int    i             = 0;
    //   string timeHolder    = "";
    //   string timeFormatted = "";
    //   string segment       = "";
    //   string timeMin       = "";
    //   string timeHr        = "";
    //   string dateDay       = "";
    //   string dateMonth     = "";
    //   string dateYear      = "";
      
    //   chrono::duration<int, ratio<60*60*24> > one_day (1);
    //   chrono::system_clock::time_point current = chrono::system_clock::now();
      
    //   time_t tt;
      
    //   tt = chrono::system_clock::to_time_t(current); //Example: Sun Dec 11 01:39:29 2016
    //   //cout << "Current day: " << ctime(&tt);
      
    //   timeHolder = ctime(&tt);
      
    //   stringstream timeStream(timeHolder);
    //   //vector<string> seglist; //Replaced by array
    //   i = 0;
    //   while(getline(timeStream, segment, ' '))
    //   {
    //     seglist[i].push_back(segment);
    //     cout << seglist[i] << endl;
    //     i++;
    //   }
      
    //   return timeFormatted;
    // }
    // /*<~~End Date/Time Retrieval~~>*/
     
  private:
    
    
};