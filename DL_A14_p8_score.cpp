// Your Name: Daniel Loza
// Date:4/4/17
// Class C++, engr 1540
// Assignment Name Assignment 14
//Problem 8 Lowest score drop

// calculate average of a group of scores. dropping the lowest.
// =========================================

#include <iostream>
#include <cmath>

//create function
void getScore ()
{
// ask for score and store in ref parameter
cout << "Please enter a score:" << endl;
cin >> score;
//validate 0-100
while (score < 0 || score >100)
{
    cout << "Invalid score. Please enter a score between 0 and 100:" << endl;
cin >> score;
}
}


//create function that finds average
void calcAverage(int score1,int score2,int score3,int score4,int score5, int average)
{
    // drop lowest
    findLowest(score1, score2, score3, score4, score5)

    sum = score1 + score2 + score3 + score4
    //average of 4 sores.

    average = (sum) /4;
}


int findLowest()
{
    int lowest;



    return lowest;
}
using namespace std;
// main program
int main()
{
   //create variables
   int score1, score2, score3, score4, score5, lowest,

   //loop to get 5 scores
   for (int counter=0, counter < 5, counter++)
   {
       getScore();
   }
   //calculate average score
   calcAverage();


   //output of program
   cout >> ""
        return 0;
}
