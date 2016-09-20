#include <iostream>
#include <string>
using namespace std;

void chorus(string object, string action1, string action2) {
  cout << "The " << object << " on the bus go " << action << " and " << action;
  cout << endl;
  cout << action << " and " << action << ", " << action << " and " << action;
  cout << endl;
  cout << "The " << object << " on the bus go " << action << " and " << action;
  cout << endl;
  cout << "All through the town.";
  cout << endl;
}
void personAction(string motion) {
  cout << "Current motion: (" << motion << ")";
  cout << endl << endl;
}

int main() {

  //Variables
  string bus_object = "_";
  string bus_action = "_";
  string bus_motion = "_";
  
  //Output
  bus_object = "wheels";
  bus_action = "round";
  bus_motion = "Roll hands over each other";
  chorus(bus_object, bus_action);
  personAction(bus_motion);
  
  bus_object = "wipers";
  bus_action = "swish";
  bus_motion = "Put arms together in front of you and 'swish' like windshield wipers";
  chorus(bus_object, bus_action);
  personAction(bus_motion);
  
  bus_object = "door";
  bus_action = "beep";
  bus_motion = "Put arms together in front of you and 'swish' like windshield wipers";
  chorus(bus_object, bus_action);
  personAction(bus_motion);
  
    bus_object = "wippers";
  bus_action = "swish";
  bus_motion = "Put arms together in front of you and 'swish' like windshield wipers";
  chorus(bus_object, bus_action);
  personAction(bus_motion);
  
    bus_object = "wippers";
  bus_action = "swish";
  bus_motion = "Put arms together in front of you and 'swish' like windshield wipers";
  chorus(bus_object, bus_action);
  personAction(bus_motion);
  
    bus_object = "wippers";
  bus_action = "swish";
  bus_motion = "Put arms together in front of you and 'swish' like windshield wipers";
  chorus(bus_object, bus_action);
  personAction(bus_motion);
  
    bus_object = "wippers";
  bus_action = "swish";
  bus_motion = "Put arms together in front of you and 'swish' like windshield wipers";
  chorus(bus_object, bus_action);
  personAction(bus_motion);
}