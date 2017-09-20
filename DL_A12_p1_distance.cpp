// Your Name: Daniel Loza
// Date:3/28/17
// Class C++, engr 1540
// Assignment Name Assignment 12
//Problem 1.  gravity
// =========================================

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>


using namespace std;

int main()
{





//create variables
string unitType;
int height = 1454, time=0;
double distance, gravity, totalDistance=0, fallTime;
string tableUnits;


//check what units to use
cout << "Will you be using Metric or English units? "<< setprecision(2) << fixed << endl;
cin >> unitType;


//sets gravity and table accordingly
if (unitType == "Metric" || unitType =="metric")
  {
    tableUnits = "M";
      gravity = 9.807;
  }
if (unitType == "English" || unitType =="english")
    {
        gravity = 32.174;
        tableUnits = "ft";
    }

    //for files

        ofstream outfile;
    outfile.open ("distance.txt");

    //output header
    cout << "Time (sec)" << setw(20) << "Distance (" <<tableUnits <<")" << endl;
    cout << "-------------------------------------" << endl;

    outfile<< "Time (sec)" << setw(20) << "Distance (" <<tableUnits <<")" << endl;
    outfile<< "-------------------------------------" << endl;
    //loop that calculates distances
    while (time <=10)
    {
        //calculate distance at this time
        distance = 0.5 * gravity * time * time;

        //write time and distance to file
        outfile <<time << setw(20) <<distance << endl;
        cout << time << setw(20) << distance << endl;

        time++;
    }

  outfile.close ();

  //distance to fall 1454 ft.

  fallTime = sqrt(2* height / gravity);
  cout << "The quarter will touch the ground after " << fallTime<< " seconds." << endl;


        return 0;
}
