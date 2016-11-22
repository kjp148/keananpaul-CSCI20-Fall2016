/*Take the following code and comment it to demonstrate that you understand what it is doing.*/

#include <iostream> //Including library: iostream

#include <cstring> //Including library: cstring

using namespace std; //Making namespace standard

 

int main()

{

                char firststr[10]; //Creating a 10 character long cstring named firststr

                int firstname = 0; //Creating an int named firstname and assigning 0 to it

                char *head = firststr; //Creating a char pointer named head and assigning firststr to it

                char *tail = firststr; //Creating a char pointer named tail and assigning firststr to it

                cout << "Please enter a 10 letter word or less" << endl; //Asking user to enter a 10 or less long character word

                cin >> firststr; //Taking user input and assigning to firststr

                strlen(firststr); //Not needed

                firstname = strlen(firststr); //Assigns length of firststr to firstname

                cout << "Your word is " << firststr << endl; //Outputs entered word

                if (firstname<10) //Checks if entered word is too long

                {

                                while (*head != '\0') //Outputs word forwards

                                {

                                                cout << *head;

                                                head++;

                                }

                }

                else

                {

                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; //Tells user that word is too long if it is

                }

                cout << endl;

                tail = &firststr[strlen(firststr) - 1]; //Assigns the memory location of the last character of firststr to tail

                if (firstname < 10)

                {

                                while (*tail>0) //Outputs word backwards

                                {

                                                cout << *tail;

                                                tail--;

                                }

                }

                cout << endl;

                head = firststr;

                tail = &firststr[strlen(firststr) - 1];

                head++;

                tail--;

                if (*head == *tail) //Checks if word is same normal and reverse

                {

                                cout << "It is an palindrome!" << endl; //Outputs that it's same normal and reverse

                }

                else

                {

                                cout << "It is not an palindrome" << endl; //Outputs that it's not the same normal and reverse

                }

 

                return 0;

}