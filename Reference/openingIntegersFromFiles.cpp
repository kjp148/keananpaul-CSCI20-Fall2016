#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
   ifstream inFS;        // Input file stream
   int fileNum1 = 0;     // File data
   int fileNum2 = 0;     // File data
   string filename = ""; // Input filename
   
   // Prompt user for filename
   cout << "Enter filename: " << endl;
   cin >> filename;
   
   // Try to open file
   inFS.open(filename);
   
   if (!inFS.is_open()) {
      cout << "Could not open file " << filename << endl;
      return 1;
   }
   
   // Get numbers. If too few, may encounter problems
   inFS >> fileNum1;
   inFS >> fileNum2;
   
   // Done with file, close it
   inFS.close();
   
   // Ouput values read from file
   cout << "num1: " << fileNum1 << endl;
   cout << "num2: " << fileNum2 << endl;
   cout << "num1 + num2: " << (fileNum1 + fileNum2) << endl;
   
   return 0;
}