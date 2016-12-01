#include "MyClass.h"


/*
 *  Modified so it outputs random number rather than just 0
 */

int MyClass::randomNumber(){
  srand(time(0));
  return ((rand()% 10) + 1);
}

MyClass::MyClass() : num_(0) {}

void MyClass::Output() {
  num_ = MyClass::randomNumber(); //Modified so it actually gets a random number instead of 0
  cout << "My number is: " << num_ << endl;
}