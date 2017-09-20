// Your Name: Daniel Loza
// Date:3/14/17
// Class C++, engr 1540
// Assignment Name Assignment 11
//Problem 12 Random number
// =========================================

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    //generate random number
 int numberMin =1, numberMax =100, numberOne, guess;
    numberOne = (rand( ) % (numberMax - numberMin + 1)) + numberMin;
 //ask the user for a guess
 cout << "Guess what my number is: " << endl;
    cin >> guess;
    //create checking loop
    while (guess != numberOne)
    {

    //check if guess is over
     if (guess > numberOne)
     {
         cout << "Too high. Try again: \n" ;
        cin >> guess;
     }

    //check if guess is under
         if (guess < numberOne)
     {
         cout << "Too low. Try again: \n" ;
        cin >> guess;
     }
    }
    //display the end message
    cout << "Congratulations, You figured out my number.";
        return 0;
}
