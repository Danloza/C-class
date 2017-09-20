// Your Name: Daniel Loza
// Date:2/21/17
// Class C++, engr 1540
// Assignment Name Assignment 7
//Problem 18 Speed of sound
// =========================================

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   //create and assign variables
   double speedAir = 1100, speedWater = 4900, speedSteel = 16400, distance, time;
   string material;

   // request user input.
   cout << "What is the material? Enter steel, air, or water." << endl;
    cin >> material;
    cout << "What is the distance the wave will travel in feet?" << endl; //display output
    cin >> distance;


    //test code
    //cout << material << endl;


    //deal with negative distances
    if (distance < 0)
    {
        distance *= -1;
    }

    // calculate the time
    if (material == "water" || material == "Water")
    {
        time = distance / speedWater;
    }
    else if (material == "steel" || material == "Steel")
    {
        time = distance / speedSteel;
    }
    else if (material == "Air" || material == "air")
    {
        time = distance / speedAir;
    }

    else //in case an invalid material was selected.
    {
        cout << "You did not enter a valid material. Use lowercase when entering a material." << endl;
    }



    // display the output
    cout << "It will take the sound wave "  << time << " seconds to travel through " << distance << " feet of the selected material." << endl;

        return 0;
}
