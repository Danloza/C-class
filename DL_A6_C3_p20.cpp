// Your Name: Daniel Loza
// Date:2/7/17
// Class C++, engr 1540
// Assignment Name Assignment 6
//Problem challenge 20 Interest earned
// =========================================

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
   //create variables
   double principal, ratePercent, rateDec, compoundTimes, interest, finalBalance;
    cout << "Interest earned calculator." << endl;
   //input from user
   cout << "What is the principal?" << endl;
   cin >> principal;
   cout << "What is the interest rate?" << endl;
   cin >> ratePercent;
   cout << "How many times will the interest be compounded?" << endl;
   cin >> compoundTimes;

   //run calculations

   rateDec = ratePercent * 0.01;
   interest = (principal * pow( (1 + (rateDec/compoundTimes)), compoundTimes  )) - principal;

   finalBalance = interest + principal ;

   //output results
   std :: cout << "Interest Rate:" << setw(16) << std::setprecision(4) << ratePercent << "%" << std::endl;
   std::cout << "Times Compounded:" <<std::setprecision(6)<< setw(13) << compoundTimes << std::endl;

   std::cout << std::setprecision(6) << "Principal:" <<  setw(14) << "$" << setw(6) <<principal << endl;
   std::cout << std::setprecision(4) << "Interest:" << setw(15) << "$" << setw(8) << interest << endl;
   std::cout << std::setprecision(6) << "Final Balance:" << setw(10) << "$" << setw(9) <<finalBalance << endl;





        return 0;
}
