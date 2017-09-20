// Your Name: Daniel Loza
// Date:2/9/17
// Class C++, engr 1540
// Assignment Name Exam One problem 2.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{


    cout << "Geometric Calculations from a radius." << endl;

    double radius, circleDiameter, circleCircum, circleArea, sphereVolume, sphereSurfaceArea, PI; //create variables.
      PI = 3.14;

       //input radius
        cout <<"Please enter a radius:" << endl;
        cin >> radius ;

    //mathness of radius.
   circleDiameter = 2 * radius;
   circleArea = PI * pow(radius, 2);
   circleCircum = 2 * PI * radius;
   sphereVolume = PI * 4 * pow( radius, 3) /3;
   sphereSurfaceArea = 4 * PI * pow(radius, 2);



    //display output
    setprecision(4);

    cout << "Circle Diameter:" << setw(15) << circleDiameter << endl;
    cout << "Circle Circumference:" << setw(10) << circleCircum << endl;
    cout << "Circle Area:" << setw(19) << circleArea << endl;
    cout << "Sphere Volume:" << setw(17) << sphereVolume << endl;
    cout << "sphere Surface Area:" << setw(11) << sphereSurfaceArea << endl;



    return 0;
}
