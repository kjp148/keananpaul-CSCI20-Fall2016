#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class Functions
{
  ifstream fin;
  ofstream fout;
  
  public:
    
    /*<~~Begin File Check~~>*/
    bool fileCheck(string _username, string &usernameFile)
    {
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
      bool results = false;
      string line = "";
      
      fin.open(_usernameFile);
      
      while (getline(fin, line))
      {
        if (line.find("Password: ") != string::npos)
        {
            cout << line << endl;
        }
        else
        {
          cout << "File error" << endl;
        }
      }
      fin.close();
      
      return results;
    }
    /*<~~End Password Check~~>*/
     
  private:
    
    
};