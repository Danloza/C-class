// Your Name: Daniel Loza
// Date:2/5/17
// Class C++, engr 1540
// Assignment Name Assignment 5
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    cout << "This program will calculate the midpoint of two points." << endl;
    double pointOneX, pointOneY, pointTwoX, pointTwoY, pointThreeX, pointThreeY; //create variables.
        //input cordinates
        cout << "Please enter the coordinanes one at a time." << endl;
        cout <<"Input Point 1 x coordinate: " << endl;
        cin >> pointOneX ;
        cout <<"Input Point 1 y coordinate: " << endl;
        cin >> pointOneY ;
        cout <<"Input Point 2 x coordinate: " << endl;
        cin >> pointTwoX ;
        cout <<"Input Point 2 y coordinate: " << endl;
        cin >> pointTwoY ;


    //mathness of midpoint.
    pointThreeX = (pointOneX + pointTwoX) /2;
    pointThreeY = (pointOneY + pointTwoY) /2;


    //display output
    //cout << "The coordinates of the midpoint between (" << pointOneX << "," << pointOneY << ") and (" << pointTwoX << "," << pointTwoY << ") are (" << pointThreeX << "," << pointThreeY << ")" << endl;
    cout << "Point One:" << setw(15) << "(" << pointOneX << "," << pointOneY << ")" << endl;
    cout << "Point Two:" << setw(15) << "(" << pointTwoX << "," << pointTwoY << ")" << endl;
    cout << "Mid point:" << setw(15) << "(" << pointThreeX << "," << pointThreeY << ")" << endl;

    return 0;
}
