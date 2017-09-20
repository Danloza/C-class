// Your Name: Daniel Loza
// Date:3/20/17
// Class C++, engr 1540
// Assignment Name Programing projects
//Problem 1 Area under a curve, part B
// =========================================
#include <iostream>
#include <cmath>

//height function
double equation(double X)
{
    double Y;
    Y= pow(X,2) + 1.75*X +8;
    return Y;
}

//area function
double areaRectangle(double currentX, double segmentWidth)
{
    double areaRectangle ;
    areaRectangle = segmentWidth * equation(currentX);
    return areaRectangle;
}

using namespace std;

int main()
{
    //create variables
   int  segments;
   double leftHeight, RightHeight, totalArea(0), startingX, endingX, segmentWidth, currentX;


    //user input /output
    cout << "This program calculates the area under a curve between two points on the x axis. \n";
    cout << "The equation is x^2 +1.75x +8 \n";
    cout << "Please enter the starting x value:" << endl;
    cin >> startingX ;
    // max x input
     cout << "Please enter the ending x value :" << endl;
    cin >> endingX ;


    //verify its a positive integer. code not used in part B.
    /*while (startingX < 0 || startingX %1 !=0)
    {
        cout << "Your input is invalid. Please enter a positive integer:";
        cin >> startingX;
    }


    //verify its a positive integer
    while (endingX < 0 || endingX %1 !=0)
    {
        cout << "Your input is invalid. Please enter a positive integer:";
        cin >> endingX;
    }*/
    //testcode to verify input
    //cout <<"points entered:" << startingX << "  " << endingX;


    //get teh number of intervals
    cout << "Please enter the number of intervals (integer only): " << endl;
    cin >> segments;

    //calculates rectangle widths
    segmentWidth = abs((endingX - startingX)/segments);

    //testcode
  //  cout << segmentWidth << endl;

    //sets the currentX to the starting x before the loop
    currentX=startingX;
// loop for calculating area

while (currentX < endingX)
{
    //sends current point to functions that return the rectangles area.
    totalArea = totalArea + areaRectangle(currentX, segmentWidth);

    //testcode
  // cout << " point " << currentX << " area: " << totalArea << endl;
    currentX += segmentWidth;


}


  //format the output.
   cout << "The area under the curve between " << startingX << "and" << endingX << " is " <<totalArea << " Square inches." << endl;
    return 0;
}
