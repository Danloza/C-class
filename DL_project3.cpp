// Your Name: Daniel Loza
// Date:4/18/17
// Class C++, engr 1540
// Assignment Name project 3
//Problem Analyze well production data
// =========================================
     #include <iostream>
     #include<cmath>
     #include <iomanip>
     #include <fstream>
     #include <stdlib.h>



     //declare function names
int arraySizer(); // counts the lines in the data file.

void arrayFiller(int rows, double dataArray[][10]);  // fills the array with the data.

int countWells (int arrayRows, double dataArray[][10]); // deptermines how many wells are in the dataset



void highLowProdcution(int WellStart, double dataArray[][10]); // Displays the high and low month and year for a given well.

void displayWellTable( int currentRow, double dataArray[][10]);  // displays the production of a given well.

void displayTotalsTable(int rows, double dataArray[][10]); // displays information for all wells.

void displayBar(int rows, double dataArray[][10]); //using code from population assignment, produces a bar graph and extra credit.

void saveToFile(); //saves the output to a file and runs clearScreen().




using namespace std;

int main()
{

   //program intro
    cout << "River Delta South Field well analysis." << endl;
    cout << "This program will give a summary of production info from each well and the field as a whole.\n\n " << endl;

    //figure out how big of an array we need.
    int arrayRows=0, currentRow=0;
    arrayRows = arraySizer();


    //testcode
    //cout << "there are " << arrayRows << "rows" << endl;

    //creates array
    double dataArray[arrayRows][10];
    //fills the data into the array using a function
    arrayFiller(arrayRows, dataArray);
    //note on data, column and what it contains
    // 0 well number, 1 welltype, 2 month, 3 year, 4 status, 5 oil produced, 6 water produced, 7 days production, 8 gas produced, 9 api gravity.


    //find out how many wells are in the data set using a function
    int ammountOfWells=0;
    ammountOfWells= countWells(arrayRows, dataArray);

    //loop to display info for each well. tables will equal amount of different wells.
    for (int loopcounter=0; (loopcounter <= ammountOfWells) && (currentRow < arrayRows); loopcounter++)
    {
        //determines the current well number. goes through first item in array, until it find the next one.
        int currentWell;
        currentWell = dataArray[currentRow][0];

        //intro for well table.
        cout << "Well #" << currentWell << "'s production information is displayed bellow." << endl;

        //displays a table for the current well
        displayWellTable(currentRow, dataArray);

        //displays the high and low production
        highLowProdcution(currentRow, dataArray);

        // see what the user wants to do next
        int choice;
        cout <<"Type 1 to view next well, type 2 to see info on all wells:" << endl;
        cin >> choice;
        if (choice == 1)
        {
            //clears the data off the screen.
            system("cls");

            //find the next well
            while (currentWell== dataArray[currentRow][0])
            {
                currentRow++;
            }


        }
        if (choice == 2)
        {
            //clears the data off the screen.
            system("cls");
            //exits the loop
            break;
        }

    }

    //for all wells,
    // creates a table with the totals for all wells.
    displayTotalsTable(arrayRows, dataArray);

    //displays a bar graph of the wells
    displayBar(arrayRows, dataArray);


    //tell user they are done with well tables.
    cout << "that was all the wells." << endl;



    //optional, give user option to save output to file.


    return 0;
}

//function implementations. use double dataArray[arrayRows][10] when a functions needs the array.

int arraySizer() // counts the lines in the data file.
{
    //variable to hold quantity to return
    int numberOfLines=0;
    //open file
        ifstream inFile;
    inFile.open ("project3data.txt");

string datastuff;
    while (inFile)
    {
        //fills varible with each line.
        getline(inFile, datastuff);
        //increases numberLines by one each time the loop runs.
        numberOfLines++;
        //testcode
        //cout << "THere are " << numberOfLines << " lines so far" <<endl;

    }

  inFile.close ();
  //account for first row and off by one error
    numberOfLines -=2;
    return numberOfLines;

}


void arrayFiller(int rows, double dataArray[][10])  // fills the array with the data.
{

        //for files
//open file
        ifstream inFile;
    inFile.open ("project3data.txt");


    //moves scores from file to array.
  for (int currentRow=0; currentRow <= rows; currentRow++)
  {
      //loop for columns.
      for (int col =0; col < 10; col++)
      {
          //send data into array. skipping first line, and well type.
          if (currentRow==0 || col ==1)
          {
              string junkData;
              inFile >> junkData;
              //testcode

              //cout << "line skipped" <<dataArray[(currentRow-1)][col]<< endl;

          }
          else
          {
            inFile >> dataArray[(currentRow-1)][col];


            //test code
            //cout<<"wrote to " << currentRow << col << "value: " <<setprecision(7) << dataArray[(currentRow-1)][col]<<"  "<<endl;
          }

      }
  }
  inFile.close ();

}


int countWells(int arrayRows, double dataArray[][10])
{
    //variable for function to work
    int ammountOfWells;
     //go through data, see how many different values are in array[counter][0], number of wells.
    for (int index=1; index < arrayRows; index ++)
    {
        if (dataArray[(index-1)][0] != dataArray[(index)][0] )//if previous well is different from current well, add one to count.
            ammountOfWells++;
            //testcode
          //  cout << "Current well " <<dataArray[index][0] << endl;
        }

    //test code
    //cout << "There are " << ammountOfWells << " different wells. last well is " << setprecision(7) <<dataArray[(arrayRows-1)][0] << endl;
    return ammountOfWells;
}

void highLowProdcution(int wellStart, double dataArray[][10]) // Displays the high and low month and year for a given well.
{
    //tell the function which well it's working with.
    int wellNum;
    wellNum=dataArray[wellStart][0];
       //variables for max and low month, year calculations.
    int highYear, highMonth, lowYear, lowMonth, highOil, lowOil, highRow, lowRow;
    //create an independent counter.
    int highCounter;
    highCounter=wellStart;
    highRow=highCounter;
    highOil = dataArray[highCounter][5];
    //loop to check if there's a row with higher production.
    while(wellNum== dataArray[highCounter][0])
    {
        //compares high oil to next row.
        if (highOil < dataArray[highCounter][5])
            {
                highOil =dataArray[highCounter][5];
                highRow=highCounter;
            }
        highCounter++;
    }

   //fills in the high month, and year from the highest production row.
    highYear = dataArray[highRow][3];
    highMonth = dataArray[highRow][2];

       // if no oil was produced
    if (highOil==0)
        cout << "There was no high production from this well in the time period. \n" << endl;
    //displays the high production month and year, if oil was produced.
    else
        cout << "\n The highest production was " << highOil << " Barrels of oil and took place on " << highMonth << " " << highYear << endl;


    //The same process for the low procution.
     //create an independent counter.
    int lowCounter;
     lowCounter=wellStart;
    lowRow=lowCounter;

    //sets the starting low point to the highest production value.
    lowOil = dataArray[highRow][5];
    //loop to check if there's a row with higher production.
    while(wellNum== dataArray[lowCounter][0])
    {
        //compares low oil to next row.
        if ((lowOil > dataArray[lowCounter][5]) && (dataArray[lowCounter][5] != 0))
            {
                //sets low oil and low row to the row with the lower value, thats not zero.
                lowOil =dataArray[lowCounter][5];
                lowRow=lowCounter;
            }

            //move to next row.
        lowCounter++;
    }

   //fills in the high month, and year from the highest production row.
    lowYear = dataArray[lowRow][3];
    lowMonth = dataArray[lowRow][2];

// only displays this if there was a high production.
    if (highOil !=0)
    {


    // if no oil was produced
    if (lowOil==0)
        cout << "There was no low production from this well in the time period. \n" << endl;
    //displays the low production month and year, if oil was produced.
    else
        cout << "\n The lowest production was " << lowOil << " Barrels of oil and took place on " << lowMonth << " " << lowYear <<"\n"<< endl;
    }

}

int minValue(int wellNum); //returns the lowest production month and year.

int stdDeviation(int wellNum); // returns the standard deviation for a given dataset.

void displayWellTable(int startRow, double dataArray[][10])  // displays the production of a given well in a table.
{

    //output header
    cout  << "Year" <<setw(20) <<"Barrels of Water" <<setw(20) << "Barrels of Oil" << endl;
    cout << "-----------------------------------------------------------------------------------------------------" << endl;

    //variables for calculations and averages.
    double oilAvg=0,wellNum, waterAvg=0, year=2015, oilSum=0, waterSum=0, oilTotal=0, waterTotal=0;
    wellNum=dataArray[startRow][0];
    int  oilNumValues=0, waterNumValues=0;

    //loop for data calculations
int counter=startRow;

//loop that displays year data
    while (wellNum == dataArray[counter][0]&& year > 2009)
    {
        //run the calculations
        year = dataArray[counter][3];


        //loop to sum each year.
        while (year==dataArray[counter][3])
        {
        //sums the months oil production
        oilSum += dataArray[counter][5];

        waterSum+= dataArray[counter][6];


           //increases counter for next itteration.
                counter++;

                //testcode
               // cout << "The row is" << counter << endl;
              //  cout << "oil " << oilSum << "water " << waterSum<< endl;
        }
        //increases by one for every year.
        oilNumValues++;
        waterNumValues++;



        //display on table
        cout << year << setprecision(7) <<setw(20) << waterSum << setw(20) << oilSum<< endl;
        //adds up for totals
        waterTotal+=waterSum;
        oilTotal+=oilSum;
        //clears the values of oilSum and waterSum for next year
        oilSum=0;
        waterSum=0;
    }


    // totals for time period,
    cout << "\nTotals:"<< setprecision(8) <<setw(17) << waterTotal << setw(20) << oilTotal<< endl;



    //devetermine avearage
    oilAvg= oilTotal / oilNumValues;
    waterAvg = waterTotal / waterNumValues;
    //testcode
    //cout << "The average was based on " << oilNumValues << " years." << endl;


    // display averages

    cout << "Average per yr:"<< setprecision(6) <<setw(9) << waterAvg << setw(20) << oilAvg<< endl;

    //calculate the standard deviation for oil.
    double stdDevOil=0, stdDevWater=0, stdN=0;
    int stdCounter;

    //oil std
    stdCounter=startRow;

        //loop that runs the sum for the equation. it's contained to this well for the entire time period.
    while (wellNum == dataArray[stdCounter][0])
    {
        if (dataArray[stdCounter][5]!=0)
        {
            stdDevOil+= pow((dataArray[stdCounter][5]-oilAvg), 2 );
            //increases N every time a value is added.
            stdN++;
        }
        //increases counter for next row
        stdCounter++;
    }

    //makes sure stdN is at least one.
    if (stdN == 0)
        stdN=1;

    //divides by N and takes the square root.
    stdDevOil = sqrt(stdDevOil / stdN);


    //water standard dev
        //calculate the standard deviation for water.
    stdN=0;

    stdCounter=startRow;

        //loop that runs the sum for the equation. it's contained to this well for the entire time period.
    while (wellNum == dataArray[stdCounter][0])
    {
        if (dataArray[stdCounter][6]!=0)
        {
            stdDevWater+= pow((dataArray[stdCounter][6]-waterAvg), 2 );
            //increases N every time a value is added.
            stdN++;
        }
        //increases counter for next row
        stdCounter++;
    }

    //makes sure stdN is at least one.
    if (stdN == 0)
        stdN=1;

    //divides by N and takes the square root.
    stdDevWater = sqrt(stdDevWater / stdN);

    cout << "Standard Dev: "<< setprecision(8) <<setw(10) << stdDevWater << setw(20) << stdDevOil<< "\n\n";




}


void displayTotalsTable(int rows, double dataArray[][10]) // displays information for all wells.
{
       //output header
    cout  << "For All Wells" <<setw(20) <<"Barrels of Water" <<setw(20) << "Barrels of Oil" << endl;
    cout << "--------------------------------------------------------------" << endl;

    //variables for calculations and averages.
    double oilAvg=0, waterAvg=0,  oilTotal=0, waterTotal=0;

    int  oilMonths=0, waterMonths=0;

    //loop for data calculations
int counter=0;

//loop that runs a sum for all the wells.
    while (counter < rows)
    {
        //run the calculations

        //sums the months oil production
        oilTotal += dataArray[counter][5];

        //if there is no zero. add one to average divider. adds one for each month with production
        if (dataArray[counter][5]!=0)
            oilMonths++;

           // sums the monthly water production.
        waterTotal+= dataArray[counter][6];
         //if there is no zero. add one to average divider. adds one for each month with production
        if (dataArray[counter][6]!=0)
            waterMonths++;

           //increases counter for next itteration.
                counter++;
        }



        //display on table
         cout << "\nTotals:"<< setprecision(8) <<setw(17) << waterTotal << setw(20) << oilTotal<< endl;





    //devetermine avearage
    oilAvg= oilTotal / oilMonths;
    waterAvg = waterTotal / waterMonths;

    // display averages

    cout << "Average per mo:"<< setprecision(5) <<setw(9) << waterAvg << setw(20) << oilAvg<< endl;

    //calculate the standard deviation for oil.
    //variables needed
    double stdDevOil=0, stdDevWater=0, stdN=0;
    int stdCounter=0;



        //loop that runs the sum for the equation. it's contained to this well for the entire time period.
    while (stdCounter < rows)
    {
        if (dataArray[stdCounter][5]!=0)//5 means oil column
        {
            stdDevOil+= pow((dataArray[stdCounter][5]-oilAvg), 2 );
            //increases N every time a value is added.
            stdN++;
        }
        //increases counter for next row
        stdCounter++;
    }

    //makes sure stdN is at least one.
    if (stdN == 0)
        stdN=1;

    //divides by N and takes the square root.
    stdDevOil = sqrt(stdDevOil / stdN);


    //water standard dev
        //calculate the standard deviation for water.
    stdN=0;

    //resets std counter, for water calculation.
    stdCounter=0;

        //loop that runs the sum for the equation. it's contained to this well for the entire time period.
    while (stdCounter < rows)
    {
        if (dataArray[stdCounter][6]!=0)
        {
            stdDevWater+= pow((dataArray[stdCounter][6]-waterAvg), 2 );
            //increases N every time a value is added.
            stdN++;
        }
        //increases counter for next row
        stdCounter++;
    }

    //makes sure stdN is at least one.
    if (stdN == 0)
        stdN=1;

    //divides by N and takes the square root.
    stdDevWater = sqrt(stdDevWater / stdN);

    cout << "Standard Dev: "<< setprecision(5) <<setw(10) << stdDevWater << setw(20) << stdDevOil<< "\n\n";



}



void displayBar(int rows, double dataArray[][10]) //using code from population assignment, produces a bar graph and extra credit.
{
    //create variables used by the function.
    int wellNum=0, prodOil=0, stars=0, prodWater=0, counter=0;

    //header for program section
    cout << "Bellow is a bar graph of the Oil production for the time period. \n * = 2000 barrels." << endl;

        //loop that goes through every well.
        while (counter < rows)
        {
            //selects a well based on the counter.
            wellNum = dataArray[counter][0];
            //sums the oil prodced all time by the well.
            while (wellNum== dataArray[counter][0])
            {

                prodOil += dataArray[counter][5];
                //increases row.
                counter++;
            }
            //counter is now the next well number.

            //calculates stars needed. each star is worth 2000
            stars = prodOil / 2000;

            //outputs the wellnumber
            cout << "Well #" << wellNum << "  ";
        //loop that creates stars
        while ( stars >0)
        {
            cout << "*";;
        stars --;
        }
        //creates a new line for the next itteration
       cout << endl;

       //resets variables for next well
       stars =0;




        }

}

/*
void saveToFile(); //saves the output to a file and runs clearScreen().
{
     //for files

        ofstream outfile;
    outfile.open ("distance.txt");

    //output header
    cout << "Time (sec)" << setw(20) << "Distance (" <<tableUnits <<")" << endl;
    cout << "-------------------------------------" << endl;

    outfile<< "Time (sec)" << setw(20) << "Distance (" <<tableUnits <<")" << endl;
    outfile<< "-------------------------------------" << endl;
    //loop that calculates distances
    while (time <=10)
    {
        //calculate distance at this time
        distance = 0.5 * gravity * time * time;

        //write time and distance to file
        outfile <<time << setw(20) <<distance << endl;
        cout << time << setw(20) << distance << endl;

        time++;
    }
}



*/

//code is part of function highLow production.
    /*/note on data, column and what it contains
        // 0 well number, 1 welltype, 2 month, 3 year, 4 status, 5 oil produced, 6 water produced, 7 days production, 8 gas produced, 9 api gravity.

    //variables for max and low month, year calculations.
    int highYear, highMonth, lowYear, lowMonth, highOil, lowOil, highRow, lowRow;
    //create an independent counter.
    int highCounter;
    highCounter=startRow;
    highRow=highCounter;
    highOil = dataArray[highCounter][5];
    //loop to check if there's a row with higher production.
    while(wellNum== dataArray[highCounter][0])
    {
        //compares high oil to next row.
        if (highOil < dataArray[highCounter][5])
            {
                highOil =dataArray[highCounter][5];
                highRow=highCounter;
            }
        highCounter++;
    }

   //fills in the high month, and year from the highest production row.
    highYear = dataArray[highRow][3];
    highMonth = dataArray[highRow][2];

    //displays the high production month and year, if oil was produced.
    // if no oil was produced
    if (highOil==0)
    cout << "\n\n The highest production was " << highOil << " Barrels of oil and took place on " << highMonth << " " << highYear << endl;
*/
