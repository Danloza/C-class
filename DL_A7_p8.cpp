// Your Name: Daniel Loza
// Date:2/21/17
// Class C++, engr 1540
// Assignment Name Assignment 7
//Problem 8 math tutor
// =========================================

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
   // create random numbers and add them.

   int num1, num2, sum, sumAnswer, numberMax, numberMin;
   numberMin = 10; //set the max and min values of the numbers.
   numberMax = 50;
   num1 = (rand( ) % (numberMax - numberMin + 1)) + numberMin;
   num2 = (rand( ) % (numberMax - numberMin + 1)) + numberMin;
   sum = num1 + num2;

   // asks for the sum of the numbers
   cout << "What is the sum of " << num1 << " and " << num2 << "?" << endl;
   cin >> sumAnswer;

   if (sum == sumAnswer) //test if the answer is right
        {
            cout << "Congratulations, You got the question right." << endl;

        }

        // in case its wrong.
   else
    {
       cout << "WRONG! The correct answer is " << sum << endl;
    }



        return 0;
}
