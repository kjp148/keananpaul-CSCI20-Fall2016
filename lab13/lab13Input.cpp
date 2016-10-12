#include <iostream>
#include <string>
using namespace std;

int main() {
  int minute = 0;
  int hour = 0;
  int hourStart = 0;
  int hourEnd = 0;
  string frame = "pm";
  int lineLimit = 0;
  
  cout << "Enter starting hour: ";
  cin >> hourStart;
  cout << "Enter ending hour: ";
  cin >> hourEnd;
  cout << "Enter am/pm: ";
  cin >> frame;
  hour = hourStart;
  
  while(hour < hourEnd) {
    for(minute = 0; minute < 46; minute += 15) {
    	
  	  if(lineLimit > 15) {
  	  	lineLimit = 0;
  	  	cout << endl;
  	  }
  	  
  	  if(hour < 10) {
  	  	cout << " ";
  	  }
  	  
  	  cout << hour << ":" << minute;
  	  
  	  if(minute < 10) {
  	  	cout << "0";
  	  }
  	  
  	  cout << frame << "   ";
  	  
  	  lineLimit++;
  	}
  	minute = 0;
    hour++;
  }
  
  //Ensuring Last line is printed
  if(hourEnd < 10) {
  	cout << " ";
  }
  	  
  cout << hourEnd << ":" << "00";

  cout << frame << "   ";
  
}