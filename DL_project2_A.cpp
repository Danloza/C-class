// Your Name: Daniel Loza
// Date:4/25/17
// Class C++, engr 1540
// Assignment Name Programing projects
//Problem 2 Tic Tak Toe Game
// =========================================
#include <iostream>
#include <cmath>

#include <iostream>

using namespace std;


//function to see if space is taken
bool checkFilled(int box)
{
    bool filled;
    //returns false if the space is not 0.
    if (box== 0)
        filled= false;
    else
        filled=true;

    return filled;
}

//funtion to recieve input
void playerInput(int currentPlayer, int a[][])
{
    //create variable for cordinates.
    int cordX, cordY;
    bool filled;

    //ask player for square coordinates
    cout << "Player" << currentPlayer << ". Please enter the coordinates where you wish to place your mark:" << endl;
    cin >> cordX >> cordY;

    //checks if the space is taken.
    filled= checkFilled((array[cordX][cordY]));

    //while the space is taken, ask for new ones.
    while (filled == true)
    {
           cout <<" The coordinates you selected are already taken. Place enter a different set: " << endl;
           cin >> cordX >> cordY;
           filled=checkFilled(array[cordX][cordY]);
    }


    //fills the selected square with players mark.
            array[cordX][cordY]=currentplayer;


}

//function to check winner
char checkWinner(currentPlayer);
{
    //complares if an array has matching characters
    //variable that sets winner
    char winnerIs=0;

    //checks rows
    for(int countY=0; countY<3; countY++)
    {
        for(int countX=0; countY < 3; countX++)
        {
            if (array[countY][ countX] == array[countY][(countX+1)] &&array[countY][(countX+1)]==array[countY][(countX+2)])
            {
                //sets boolean to true if the row matches
                winnerIs= currentPlayer;

                //leaves loop in case of winner
                break;
            }
        }
    }

    //checks collumns
    for(int countY=0; countY<3; countY++)
    {
        for(int countX=0; countY < 3; countX++)

            if (array[countY, countX] == array[countY, (countX+1)])
           {
                if (array[countY, (countX+1)] == array[countY, (countX+2)])
                {
                 //sets boolean to true if the arrays match
                winnerIs= currentPlayer;
                }

           }
    }
    //check diagonals
    if (array[0][0] == array[1][1] && array[1][1]==array[2][2])
        winnerIs= currentPlayer;
    if (array[2][0] == array[1][1] && array[1][1]==array[0][2])
        winnerIs= currentPlayer;
    return winnerIs;
}



//function to display current playerboard.
void displayBoard()
    {
        //loop to print rows
    for(int countY=0; countY<3; countY++)
    {   //loop for columns
        for(int countX=0; countX < 3; countX++)
        {
            cout << array[countX, countY];

            }
            cout << "\n" ;
        }
    }
int main()
{

   //intro to program
   cout << "Welcome to Tic Tac Toe. \n To play this game, " << endl;

   // create array and fill it
   int [3][3] =
   {
       {0, 0, 0},
       {0, 0, 0},
       {0, 0, 0},
   };

   char currentPlayer;
   int winnerIs=0;

   //displays the starting board.
   displayBoard();

   //runs through the game 9 times.
   for(int gameRun=0; gameRun<9; gameRun++)
   {
       //starts with player 1
       currentPlayer=1;
       //calls input function
       playerInput(currentPlayer);
       displayBoard();
        winnerIs = checkWinner(currentPlayer, array[]);
       //change to player 2

       currentPlayer=2;
       playerInput(currentPlayer);
       displayBoard();
       winnerIs = checkWinner(currentPlayer, array[]);

        //displays a message if theres a winner.
        if (winnerIs !=0)
        {
             cout << " Congratulations. Player " << winnerIs << " has won the game" ;
            break;
        }
   }



  return 0;
}
