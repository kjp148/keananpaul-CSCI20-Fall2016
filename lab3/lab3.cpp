#include <iostream>
#include <string>
using namespace std;
/* HEADER

  Name: Keanan Paul
  Function: Creating a mad lib.
*/
/* STORY

  A short, short time ago. In a land not so far away. 
  There was a cowardly [enter occupation] named [enter name]; [prev name]
  lived in the village of [enter char]. He was [enter adjective] and very 
  [enter adjective], but he still enjoyed [enter present tense verb]. 
  One morning he awaked to the sound of [enter integer above 1]
  [enter plural noun] [enter present tense verb] his
  village. Cowardly [prev name] needed to save his
  village by defeating the [prev noun] using only his
  [enter number with decimal] [enter plural throwable object].
*/

int main() {
  //Variables
  string char_job;
  string char_name;
  string adj1;
  string adj2;
  string verb1;
  string verb2;
  string noun1;
  string throwable;
  char village;
  int noun_amt;
  float throw_amt;
  
  //User input
  cout << "[COMPUTER]: Please enter an occupation." << endl<< ">";
  getline(cin, char_job);
  cout << endl;
  
  cout << "[COMPUTER]: Please enter a name." << endl << ">";
  getline(cin, char_name);
  cout << endl;
  
  cout << "[COMPUTER]: Please enter a single character." << endl << ">";
  cin >> village;
  
  cout << "[COMPTUER]: Please enter an adjective." << endl << ">";
  cin >> adj1;
  cout << endl;
  
  cout << "[COMPUTER]: Please enter another adjective." << endl << ">";
  cin >> adj2;
  cout << endl;
  
  cout << "[COMPUTER]: Please enter a present tense verb." << endl << ">";
  cin >> verb1;
  cout << endl;
  
  cout << "[COMPUTER]: Please enter an integer (Whole number)." << endl << ">";
  cin >> noun_amt;
  cout << endl;
  
  cout << "[COMPUTER]: Please enter a plural noun." << endl << ">";
  cin >> noun1;
  cout << endl;
  
  cout << "[COMPUTER]: Please enter a present tense verb." << endl << ">";
  cin >> verb2;
  cout << endl;
  
  cout << "[COMPUTER]: Please enter a number with a decimal." << endl << ">";
  cin >> throw_amt;
  cout << endl;
  
  cout << "[COMPUTER]: Please enter a plural throwable object." << endl << ">";
  cin >> throwable;
  cout << endl;
  
  cout << "STORY:" << endl << endl;
  cout << "A short, short time ago. In a land not so far away.";
  cout << "There was a cowardly " << char_job << " named " << char_name << ".";
  cout << " " << char_name << " lived in the village of " << village << ".";
  cout << "He was " << adj1 << " and very " << adj2 << ", but he still enjoyed ";
  cout << verb1 << "." << " One morning he awakened to the sound of " << noun_amt;
  cout << " " << noun1 << " " << verb2 << " his village. Cowarldy " << char_name;
  cout << " needed to save his village by defeating the " << noun1;
  cout << " using only his " << throw_amt << " " << throwable << ".";
  
}