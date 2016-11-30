#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


/*
 *  Modified so it outputs random number rather than just 0
 */

int randomNumber(){
  srand(time(0));
  return ((rand()% 10) + 1);
}

/*
 *  This class is a dummy class to help show how to
 *  break our class into an interface and implementation
 *  file. It will set a member variable to 1 on initialization
 *  and output it using the Output() function.
 */
class MyClass {
 public:
  /*
   * Constructor
   * Initialize our member variable num_ to 0
   */
  MyClass();
  /*
   * Output our member variable using cout
   */
  void Output();
 private:
  int num_;
};

MyClass::MyClass() : num_(0) {}

void MyClass::Output() {
  num_ = randomNumber(); //Modified so it actually gets a random number instead of 0
  cout << "My number is: " << num_ << endl;
}