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
  	}
  	
  }
  
  //Row total
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 4; j++) {
      rowTotal[i] += fileInt[i][j];
    }
  }
  
  //Column total
  for(j = 0; j < 4; j++) {
    for(i = 0; i < 3; i++) {
      colTotal[j] += fileInt[i][j];
    }
  }
  
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 4; j++) {
  	  fout << setw(4) << fileInt[i][j];
  	}
  	fout << setw(4) << rowTotal[i] << endl;
  }
  
  for(j = 0; j < 4; j++) {
  	fout << setw(4) << colTotal[j];
  }
  
  fin.close();
  fout.close();
}