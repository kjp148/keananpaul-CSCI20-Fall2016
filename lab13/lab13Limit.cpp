#include <iostream>
#include <string>
using namespace std;

int main() {
  int minute1 = 0;
  int minute2 = 0;
  int hour = 0;
  string frame = "pm";
  int lineLimit = 0;
  
  for(hour = 0; hour <= 2; hour++) {
  	for(minute1 = 0; minute1 <= 5; minute1++) {
  	  for(minute2 = 0; minute2 <= 9; minute2++) {
  	  	if(lineLimit > 15) {
  	  	  lineLimit = 0;
  	  	  cout << endl;
  	  	}
  	  	cout << hour << ":" << minute1 << minute2 << frame << "     ";
  	  	lineLimit++;
  	  }
  	}
  }
}