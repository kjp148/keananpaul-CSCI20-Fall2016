#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <ratio>
#include <chrono>
using namespace std;


void function() {

}

int main()
{

  chrono::duration<int, ratio<60*60*24> > one_day (1);

  chrono::system_clock::time_point today = chrono::system_clock::now();
  chrono::system_clock::time_point tomorrow = today + one_day;

  time_t tt;

  tt = chrono::system_clock::to_time_t ( today );
  std::cout << "today is: " << ctime(&tt);

  tt = chrono::system_clock::to_time_t ( tomorrow );
  std::cout << "tomorrow will be: " << ctime(&tt);

}