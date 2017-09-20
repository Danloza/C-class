// Your Name: Daniel Loza
// Date:2/9/17
// Class C++, engr 1540
// Assignment Name Assignment 6
//Problem challenge 22
// =========================================

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   cout << "Joe's Pizza Palace" << endl;
    double PI, diameter, radius, area, sliceArea, sliceTotal; //create variables
    PI = 3.14;
    sliceArea = 14.125;
    cout << "What is the diameter of the pizza?" << endl; //enter size of pizza
    cin >> diameter;

    //calculate slices
    radius = diameter / 2;
    area = PI * pow(radius, 2);
    sliceTotal = area / sliceArea;
    int sliceInt = (int) sliceTotal;

    cout << "Your "<< diameter << " inch pizza can be cut into " << sliceInt << " slices." << endl;



        return 0;
}
