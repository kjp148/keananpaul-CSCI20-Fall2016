#include <iostream>
#include <cmath>
using namespace std;

float pi = 3.14;

void vsphere(float r) {
  double v = 0.0;
  
  v = 4.0/3.0 * pi;
  v *= pow(r, 3.0);
  cout << v << endl;
}

void vrect(float l, float h, float w) {

  double v = 0.0;
  
  v = l * w * h;
  cout << v << endl;
}

void vcylinder(float r) {

  double v = 0.0;
  
  v = 4.0/3.0 * pi;
  v *= pow(r, 3.0);
  cout << v << endl;
}

void vcone(float r, float h) {

  double v = 0.0;
  
  v = 1.0/3.0 * pi;
  v *= pow(r, 2.0);
  v *= h;
  
  cout << v << endl;
}

void sasphere(float r) {

  double sa = 0.0;
  
  sa = 4.0 * pi;
  sa *= pow(r, 2.0);
  cout << sa << endl;
}

void prect(float l, float h, float w) {

  double p = 0.0;
  
  p = 2 * (l + w + h);
  cout << p << endl;
}

void pvol(float h, float b) {
  double v = 0.0;
  
  v = 1.0/3.0 * b * h;
  cout << v << endl;
}

void sarect(float l, float h, float w) {

  double sa = 0.0;
  
  sa = 2 * (l * w + l * h + h * w);
  cout << sa << endl;
}

int main() {
    ╕
  vsphere(10);
  vrect(10, 5, 7);
  vcylinder(10);
  vcone(10, 5);
  prect(10, 5, 7);
  pvol(10, 7);
  sarect(10, 5, 7);
}