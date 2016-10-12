#include <iostream>
#include <string>
using namespace std;

int main() {
  int minute1 = 0;
  int minute2 = 0;
  int hour = 0;
  string frame = "pm";
  int lineLimit = 0;
  
  cout << "Enter starting hour: ";
  cin >> hour;
  cout << "Enter starting minute in first space: ";
  cin >> minute1;
  cout << "Enter starting minute in second space: ";
  cin >> minute2;
  cout << "Enter am/pm: ";
  cin >> frame;
  
  for(hour = hour; hour != 13; hour++) {
    for(minute1 = minute1; minute1 <= 5; minute1++) {
  	  for(minute2 = minute2; minute2 <= 9; minute2++) {
  		if(lineLimit > 15) {
  	  	  lineLimit = 0;
  	  	  cout << endl;
  	  	}
  	  	if(hour < 10) {
  	  	  cout << " ";
  	  	}
  	  	cout << hour << ":" << minute1 << minute2 << frame << "   ";
  	  	lineLimit++;
  	  }
  	  minute2 = 0;
  	}
  	minute1 = 0;
  	
  if(frame == "am" && hour == 12) {
  	frame = "pm";
  	hour = 1;
  }
  else if(frame == "pm" && hour == 12) {
  	break;
  }
  else {
  }
  
  }
}