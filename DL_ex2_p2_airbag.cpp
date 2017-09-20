// Your Name: Daniel Loza
// Date:3/21/17
// Class C++, engr 1540
// Assignment Name Exam 2
//Problem 2, Ford airbags
// =========================================

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
     //create variables
    int  driverWeight, passengerTwo;
    //prompt for driver weight
    cout << "Please enter the Drivers weight:" << endl;
    cin >> driverWeight;

     //loop to validate input
     while (driverWeight <0)
    {
    cout << "ERROR: Please enter a valid weight for the driver:" << endl ;
    cin >> driverWeight;
    }


      //prompt for passenger weight
    cout << "Please enter the passengers weight:" << endl;
    cin >> passengerTwo;

     //loop to validate input
     while (passengerTwo <0)
    {
    cout << "ERROR: Please enter a valid weight for the passenger:" << endl ;
    cin >> passengerTwo;
    }

    //driver side action tree:
    cout << "Driver side airbag action: " ;
    if (driverWeight < 75)
     {
         cout << "Never Deploy" << endl;
     }
     else if ( driverWeight >75 && driverWeight <149)
     {
         cout << "Deploy at half force" << endl;
     }
    else if ( driverWeight >=150 && driverWeight <249)
     {
         cout << "Deploy at half force" << endl;
     }
     else
     {
         cout << "Deploy at 2x force" << endl;
     }


    //passanger side action tree:
    cout << "Passenger side airbag action: " ;
    if (passengerTwo <= 9)
     {
         cout << "Never Deploy" << endl;
     }
     else if ( passengerTwo >10 && passengerTwo <99)
     {
         cout << "UNSAFE CONDITION!!!!" << endl;
     }
    else if ( passengerTwo >=100 && passengerTwo <249)
     {
         cout << "Deploy at full force" << endl;
     }
          else
     {
         cout << "Deploy at 2x force" << endl;
     }
        return 0;
}
