// Your Name: Daniel Loza
// Date:3/20/17
// Class C++, engr 1540
// Assignment Name Programing projects
//Problem 1 Area under a curve
// =========================================
#include <iostream>
#include <cmath>

//height function
double equation(int X)
{
    double Y;
    Y= pow(X,2) + 1.75*X +8;
    return Y;
}

//area function
double areaRectangle(int currentX)
{
    double areaRectangle, width=1.0;
    areaRectangle = width * equation(currentX);
    return areaRectangle;
}

using namespace std;

int main()
{
    //create variables
   int startingX, endingX, currentX(0);
   double leftHeight, RightHeight, totalArea(0);


    //user input /output
    cout << "This program calculates the area under a curve between two points on the x axis. \n";
    cout << "The equation is x^2 +1.75x +8 \n";
    cout << "Please enter the starting x value:" << endl;
    cin >> startingX ;

    //verify its a positive integer
    while (startingX < 0 || startingX %1 !=0)
    {
        cout << "Your input is invalid. Please enter a positive integer:";
        cin >> startingX;
    }
    // max x input
     cout << "Please enter the ending x value :" << endl;
    cin >> endingX ;

    //verify its a positive integer
    while (endingX < 0 || endingX %1 !=0)
    {
        cout << "Your input is invalid. Please enter a positive integer:";
        cin >> endingX;
    }
    //testcode to verify input
    //cout <<"points entered:" << startingX << "  " << endingX;


// loop for calculating area

while (currentX < endingX)
{
    //sends current point to functions that return the rectangles area.
    totalArea = totalArea + areaRectangle(currentX);

    //testcode
   // cout << " point " << currentX << " area: " << totalArea << endl;
    currentX ++;


}


  //format the output.
   cout << "The area under the curve between " << startingX << "and" << endingX << " is " <<totalArea << " Square inches." << endl;
    return 0;
}
