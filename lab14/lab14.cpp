#include <iostream>

using namespace std;

 

int main()

{

  //Get number of years

  int Y;

  cout << "How many years would you like to simulate: ";

  cin >> Y;

 

  /*************************************************/

  /******** S I M U L A T E   Y   Y E A R S ********/

  /*************************************************/

  double B = 0;

  for(int k = 1; k <= Y; k++) { /*Changed from int k = 0 to int k = 1 to fix starting year*/

 

    //Get payment amount & adjust balance

    double P;

    cout << "Payment for year " << k << " : "; 

    cin >> P;

    B = B + P;

 

    //Compute annual rate R

    int T = B / 1000; //Get number of 1000's

    double R = 3 + 0.5 * T; //Compute rate

    if (R > 8.0) //Correct for 8% cap

      R = 8.0;

 

    //Compute new balance with interest for the year

    double r = R/100;

    for(int i = 0; i < 12; i++)
 
      B = B * (1 + r/12);

  }

 

  //Print final balance

  cout << "Final balance is $" << B << endl; /*Changed so it prints $num rather than num dollars*/

  return 0;

}