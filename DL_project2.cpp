// Your Name: Daniel Loza
// Date:3/20/17
// Class C++, engr 1540
// Assignment Name Programing projects
//Problem 2 Tic Tak Toe Game
// =========================================
#include <iostream>
#include <cmath>

#include <iostream>

using namespace std;

int main()
{
   /* cout << "Hello world!" << endl;
    cout << " Please select your favorite movie: \n \n";
    cout << "1. Star Wars \n \n";
    cout << "2. North by Northwest \n \n";
    cout << "3. Frozen \n \n";
    cout << "4. Stay Home \n \n";

int stop(5), total(0), i(1);

    while (false)
    {
    total = i+total;
    i++;
    cout <<total<< endl;
    } */

    int input, result(1), working(0);
    cout << "Enter a number to factorial:" << endl;
    cin >> input;

    while (input < 0 || input > 10)
    {
        cout << "Your input is invalid. Please enter something between 1 and 10.";
        cin >> input;
    }

   while (working < input)
    {
        result = result * (working + 1);
        working++;

      //  cout << result << "  space  " <<working<< endl; //testcode
    }
    cout << "Program has ended after runing" << working << " Times and results in " << result << endl;
    return 0;
}
