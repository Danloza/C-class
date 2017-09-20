// Your Name: Daniel Loza
// Date:1/31/17
// Class C++, engr 1540
// Assignment Name Assignment 3
//Problem 6 shipping charges
// =========================================

#include <iostream>
#include <cmath>
#include <iomanip>

//create function
double calculateCharge(int weight, int distance )
{
    //create variables
    double charge,distanceLoop=0, distaceMultiplier=0;
    distanceLoop = distance;

    //calculates multiples of 500 to be charged
    while (distanceLoop >0)
    {

        distanceLoop -= 500;
        distaceMultiplier++;
        //test code


    }


    //calculates the charge
    if (weight < 2) //2kg or less
    {
     charge =    distaceMultiplier* 3.1;
    }
    else if (weight >=2 & weight <6) // over 2 kg but not more than 6 kg
    {
         charge =    distaceMultiplier*  4.2;
    }
    else if ( weight >=6 & weight < 10) // over 6 but not more than 10
    {
         charge =    distaceMultiplier*  5.3;
    }
    else // over 10 kg
    {
         charge =    distaceMultiplier*  6.4;
    }


    return charge;
}




using namespace std;

int main()
{

    //create varaibles
    double distance, weight, charge;
    //greeting
    cout << "Fast Freight Shipping Company charge calculator" << endl;

   //create loop
   do {
   //prompt user for weight
   cout << "How much does your package weight in Kg?"<< endl;
   cin >> weight;

    //ends program at weight 0
    if (weight == 0)
    {
        break;
    }
   //prompt user for distance
   cout << "How many miles will you be shipping this?"<< endl;
   cin >> distance;

   //calls function to calculate cost
   charge = calculateCharge(weight, distance);

   //display output
    cout << "It will cost $" << setprecision(2) << fixed << charge << " to ship the package " << distance<< " miles." << endl;

   } while (weight !=0); //exit loop when weight of 0 is entered.
    //goodbye
    cout << "Thank you for doing business with us."<< endl;


        return 0;
}
