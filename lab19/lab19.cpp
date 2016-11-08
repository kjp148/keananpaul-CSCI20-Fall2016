#include <iostream>
#include <fstream>
#include <ios>
#include <iomanip>
using namespace std;

int main() {

  int fileInt[4][4];
  int rowTotal[3] = {0, 0, 0};
  int colTotal[4] = {0, 0, 0, 0};
  int i = 0; //Columns
  int j = 0; //Rows

  ifstream fin;
  ofstream fout;
  
  fin.open("input.txt");
  fout.open("output.txt");
  
  for(i = 0; i < 3; i++) {
  	
  	for(j = 0; j < 4; j++) {
  	  fin >> fileInt[i][j];
      cout << fileInt[i][j] << "     ";
      rowTotal[i] += fileInt[i][j];
      colTotal[j] += fileInt[i][j];
      
      cout << endl << "Row[" << i + 1 << "]: " << rowTotal[j] << endl;
      cout << "Col[" << j + 1 << "]: " << colTotal[i] << endl;
  	}
  	
  }
  
  
  
  
  
  fin.close();
  fout.close();
}