#include <iostream>
using namespace std;

class functionHolder {

  public:
  
  void functionOne() {
    int suzyAge = 25;
    int johnAge = 21;
    cout<<(suzyAge < johnAge) << endl << endl;
  }
  
  void functionTwo() {
  	int x =7;
    int y = 7;
    cout << (x >= y) << endl << endl;
  }
  
  void functionThree() {
  	int a = 1;
  	int b = 9;
  	cout << (a == b) << endl << endl;
  }
  
  void functionFour() {
  	int limit = 20;
  	int count = 10;
  	cout << ((limit * count) / 2 > 0) << endl << endl;
  }
  
  void functionFive() {
  	int t = -4;
  	int z = 0;
  	cout << (t > 5 || z < 2) << endl << endl;
  }
  
  void functionSix() {
  	int variable = -5;
  	cout << (!(variable > 0)) << endl << endl;
  }
  
  void functionSeven() {
  	int a = 16;
  	cout << (a / 4 < 8 && a >= 4) << endl << endl;
  }
  
  void functionEight() {
  	int x = -2;
  	int y = 5;
  	cout << (x * y < 10 || y /** z*/ < 10) << endl << endl; //Removed z because it was not a variable
  }
  
  void functionNine() {
  	int j = -2;
  	int k = 5;
  	int l = 4;
  	cout << (!(j * l < 10) || /*y / x **/ 4 < /*y **/ 2) << endl << endl; //Removed y and x because they are not variables
  }
  	
};