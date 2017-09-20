// Your Name: Daniel Loza
// Date:4/4/17
// Class C++, engr 1540
// Assignment Name Assignment 14
//Problem 10 isPrime
// =========================================

#include <iostream>
#include <cmath>

//create function
bool isPrime(int number)
{
//determines if a number is prime
//creates variables
bool testResult;
int divider =2;

//loop for testing
while ( divider < number)
{
    if ((number % divider) ==0)
    {

        //make true and leave loop
        testResult = true;


    }
    else
    {
        testResult = false ;
    }
        divider +=1;
}
return testResult;
}


using namespace std;
// main program
int main()
{
   //introduction
   cout << "This program will test if a number is prime" << endl;

   //create variables
   int number;
   bool testResult;
   //prompt user for the number
    cout << "Please enter the number you wish to test:"<< endl;
    cin >> number;



   //test the number
   testResult = isPrime(number);
   if (testResult == true)
    cout << "The number " << number << " is prime" << endl;  // display  final output

    else
       cout << "The number " << number << " is  not prime" << endl;  // display  final output
        return 0;
}
