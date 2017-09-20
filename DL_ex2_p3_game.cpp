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
 int numberMin =1, numberMax =100, numberOne, guess, attempts=0;
    numberOne = (rand( ) % (numberMax - numberMin + 1)) + numberMin;

 //ask the user for a guess
 cout << "Guess what my number is: " << endl;
    cin >> guess;

    //validate input
    while (guess < 0 || guess >100)
    {
    cout << "ERROR: Please enter a valid guess between 0 and 100:" << endl ;
    cin >> guess;
    }
    //create checking loop
    while (guess != numberOne)
    {

    //check if guess is over
     if (guess > numberOne)
     {
         cout << "Too high and guess again: \n" ;
        cin >> guess;
        attempts++;
     }

    //check if guess is under
         if (guess < numberOne)
     {
         cout << "Too low and guess again: \n" ;
        cin >> guess;
         attempts++;
     }
    }
    //display the end message
    cout << "Correct. Thanks for playing" << endl;

    //extra credit
    cout << "Congratulations, you guessed the correct number. It took you " << attempts << " guesses." << endl;

     if ( attempts<= 7)
     {
         cout << "Championship Ability" << endl;
     }
     else if ( attempts> 7 && attempts<15)
     {
         cout << "Very Good Ability" << endl;
     }

     else
     {
         cout << "Don't go to Las Vegas anytime soon" << endl;
     }
        return 0;
}
