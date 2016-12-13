#include <iostream> //Used for user input/output
#include <string>   //Used for strings
#include <fstream>  //Used for file input/output
#include <iomanip>  //Used for output manipulation
using namespace std;

/* These were used for auto time but that didn't work out */
//#include <sstream>  //Used for string stream buffers
//#include <ctime>    //Used for time and date
//#include <chrono>   //Used for time and date
//#include <ratio>    //Used for creating ratio's
//#include <vector>   //Used for vectors

class Functions
{  
  public:
    
    bool fileCheck(string _username, string &usernameFile);

    bool passCheck(string _password, string _usernameFile);
     
  private:
    
};