#include <iostream>
#include <string>
using namespace std;

struct monsterStruct {
  string head;
  string eyes;
  string ears;
  string nose;
  string mouth;
};

int main() {
  //Struct
  monsterStruct monsterOne;
  monsterStruct monsterTwo;
  monsterStruct monsterThree;
  monsterStruct monsterFour;
  
  //Monster One
  cout << "Lets create a monster!" << endl;
  
  cout << "Available head types:" << endl;
  cout << "[Zombus] [Franken] [Happy]" << endl;
  cout << "Please enter a head type: ";
  cin >> monsterOne.head;
  cout << endl;
  
  cout << "Available eye types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a eye type: ";
  cin >> monsterOne.eyes;
  cout << endl;
  
  cout << "Available ear types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a ear type: ";
  cin >> monsterOne.ears;
  cout << endl;
  
  cout << "Available nose types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a nose type: ";
  cin >> monsterOne.nose;
  cout << endl;
  
  cout << "Available mouth types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a mouth type: ";
  cin >> monsterOne.mouth;
  cout << endl;
  
  //Monster Two
  cout << "Lets create another monster! :(" << endl;
  
  cout << "Available head types:" << endl;
  cout << "[Zombus] [Franken] [Happy]" << endl;
  cout << "Please enter a head type: ";
  cin >> monsterTwo.head;
  cout << endl;
  
  cout << "Available eye types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a eye type: ";
  cin >> monsterTwo.eyes;
  cout << endl;
  
  cout << "Available ear types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a ear type: ";
  cin >> monsterTwo.ears;
  cout << endl;
  
  cout << "Available nose types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a nose type: ";
  cin >> monsterTwo.nose;
  cout << endl;
  
  cout << "Available mouth types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a mouth type: ";
  cin >> monsterTwo.mouth;
  cout << endl;
  
  //Monster Three
  cout << "Lets create a monster?!?! >:(" << endl;
  
  cout << "Available head types:" << endl;
  cout << "[Zombus] [Franken] [Happy]" << endl;
  cout << "Please enter a head type: ";
  cin >> monsterThree.head;
  cout << endl;
  
  cout << "Available eye types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a eye type: ";
  cin >> monsterThree.eyes;
  cout << endl;
  
  cout << "Available ear types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a ear type: ";
  cin >> monsterThree.ears;
  cout << endl;
  
  cout << "Available nose types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a nose type: ";
  cin >> monsterThree.nose;
  cout << endl;
  
  cout << "Available mouth types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a mouth type: ";
  cin >> monsterThree.mouth;
  cout << endl;
  
  //Monster Four
  cout << "Lets create a stupid monster.... :`(" << endl;
  
  cout << "Available head types:" << endl;
  cout << "[Zombus] [Franken] [Happy]" << endl;
  cout << "Please enter a head type: ";
  cin >> monsterFour.head;
  cout << endl;
  
  cout << "Available eye types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a eye type: ";
  cin >> monsterFour.eyes;
  cout << endl;
  
  cout << "Available ear types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a ear type: ";
  cin >> monsterFour.ears;
  cout << endl;
  
  cout << "Available nose types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a nose type: ";
  cin >> monsterFour.nose;
  cout << endl;
  
  cout << "Available mouth types:" << endl;
  cout << "[Vegitas] [Wackus] [Spritem]" << endl;
  cout << "Please enter a mouth type: ";
  cin >> monsterFour.mouth;
  cout << endl;
  //Output
  cout << "<MONSTER ONE>" << endl;
  cout << "Head:  " << monsterOne.head << endl;
  cout << "Eyes:  " << monsterOne.eyes << endl;
  cout << "Ears:  " << monsterOne.ears << endl;
  cout << "Nose:  " << monsterOne.nose << endl;
  cout << "Mouth: " << monsterOne.mouth << endl;
  cout << endl;
  
  cout << "<MONSTER TWO>" << endl;
  cout << "Head:  " << monsterTwo.head << endl;
  cout << "Eyes:  " << monsterTwo.eyes << endl;
  cout << "Ears:  " << monsterTwo.ears << endl;
  cout << "Nose:  " << monsterTwo.nose << endl;
  cout << "Mouth: " << monsterTwo.mouth << endl;
  cout << endl;
  
  cout << "<MONSTER THREE>" << endl;
  cout << "Head:  " << monsterThree.head << endl;
  cout << "Eyes:  " << monsterThree.eyes << endl;
  cout << "Ears:  " << monsterThree.ears << endl;
  cout << "Nose:  " << monsterThree.nose << endl;
  cout << "Mouth: " << monsterThree.mouth << endl;
  cout << endl;
  
  cout << "<MONSTER FOUR>" << endl;
  cout << "Head:  " << monsterFour.head << endl;
  cout << "Eyes:  " << monsterFour.eyes << endl;
  cout << "Ears:  " << monsterFour.ears << endl;
  cout << "Nose:  " << monsterFour.nose << endl;
  cout << "Mouth: " << monsterFour.mouth << endl;
  cout << endl;
}