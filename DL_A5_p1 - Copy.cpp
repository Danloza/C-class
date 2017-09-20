// Your Name: Daniel Loza
// Date:2/5/17
// Class C++, engr 1540
// Assignment Name Assignment 5
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string name;//create varaibles
    //input name
    cout << "What is your name?" << endl;
    cin >> name;
    double pointOneX, pointOneY, pointTwoX, pointTwoY, pointThreeX, pointThreeY; //create variables.
        //input cordinates
        cout << "Input the three corners of a triangle adn this program will calculate the area and perimeter." << endl;
        cout <<"Input Point 1 x coordinate: " << endl;
        cin >> pointOneX ;
        cout <<"Input Point 1 y coordinate: " << endl;
        cin >> pointOneY ;
        cout <<"Input Point 2 x coordinate: " << endl;
        cin >> pointTwoX ;
        cout <<"Input Point 2 y coordinate: " << endl;
        cin >> pointTwoY ;
        cout <<"Input Point 3 x coordinate: " << endl;
        cin >> pointThreeX ;
        cout <<"Input Point 3 y coordinate: " << endl;
        cin >> pointThreeY;
    //mathness of areaness.
    double  lengthOne, lengthTwo, lengthThree, area;

    area = .5 * ((pointOneX-pointThreeX)*(pointTwoY-pointOneY)-(pointOneX-pointTwoX)*(pointThreeY-pointOneY));
    area = abs(area);
    lengthOne = sqrt ( pow((pointTwoX - pointOneX),2)+(pow( (pointTwoY - pointOneY),2)));//lengths of each line.
    lengthTwo = sqrt ( pow((pointTwoX - pointThreeX),2)+(pow( (pointTwoY - pointThreeY),2)));
    lengthThree = sqrt ( pow((pointThreeX - pointOneX),2)+(pow( (pointThreeY - pointOneY),2)));
    double perimeter; //mathness of perimeter.


    perimeter = lengthOne + lengthTwo + lengthThree;

    cout << "Thank you " << name << ".  The area is: " << area<< "in ^3  and the perimeter is " << perimeter <<" in." << endl;

    return 0;
}
