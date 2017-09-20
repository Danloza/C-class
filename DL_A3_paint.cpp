// Your Name: Daniel Loza
// Date:1/31/17
// Class C++, engr 1540
// Assignment Name Assignment 3
//Problem How much paint?
// =========================================

#include <iostream>

using namespace std;

int main()
{
   cout << "Paint usage and cost calculator:" << endl;
    double fenceLength = 150, fenceHeight = 6, fenceArea, coveragePerGallon = 340, tax, paintCost = 25.75, paintCostTotal, gallonsPaint, finalCost; //create variables
    fenceArea = fenceHeight * fenceLength;  //calculate surfacearea
    gallonsPaint = fenceArea / coveragePerGallon; //calculates gallons needed.
    paintCostTotal = gallonsPaint * paintCost;
    tax = 0.075 * paintCostTotal;
    finalCost = tax + paintCostTotal;

    cout << "The costumer must cover " <<  fenceArea << " square feet of fence." << endl; //display output
    cout << "This will require " <<  gallonsPaint << " gallons of paint." << endl;
    cout << "The paint will cost $" <<  paintCostTotal <<  endl;
    cout << "The tax will be $ " <<  tax <<  endl;
    cout << "The grand total is $" <<  finalCost << endl;

        return 0;
}
