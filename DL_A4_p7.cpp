// Your Name: Daniel Loza
// Date:2/7/17
// Class C++, engr 1540
// Assignment Name Assignment 4
//Problem challenge 7
// =========================================

#include <iostream>

using namespace std;

int main()
{
   cout << "Average rainfall calculator:" << endl;
    string monthOne, monthTwo, monthThree;
    double monthOneRain, monthTwoRain, monthThreeRain, rainAvg; //create variables



    cout << "What is the first month?" << endl; //input info
    cin >> monthOne;
    cout << "How much rain fell this month?" << endl;
    cin >> monthOneRain;
    cout << "What is the second month?" << endl; //input info
    cin >> monthTwo;
    cout << "How much rain fell this month?" << endl;
    cin >> monthTwoRain;
    cout << "What is the third month?" << endl; //input info
    cin >> monthThree;
    cout << "How much rain fell this month?" << endl;
    cin >> monthThreeRain;

    //mathness of average
    rainAvg = (monthOneRain + monthTwoRain + monthThreeRain) / 3;

    //display results
    cout << "The average monthly rainfall for " << monthOne << ", " << monthTwo << ", and " << monthThree << " was " << rainAvg << " inches." << endl;

        return 0;
}
