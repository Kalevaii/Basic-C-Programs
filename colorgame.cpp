
//Description: this program will allow the user to play a game of Red,
//  Green, Blue Squirrels against a randomized computer opponent



#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int user_num;  //user's choice
    int comp_num;  //computer's choice

    // Generate the computer's choice randomly:
    srand(time(NULL));
    comp_num = rand() % 3 + 1;

    // Get the user's choice:
    cout << "Natural Selection Game" << endl
         << " 1. Red" << endl
         << " 2. Blue" << endl
         << " 3. Green" << endl
         << "Enter a number : ";
    cin >> user_num;
    cout << endl;


    // TODO: Determine if the user wins, loses, or ties (or enters invalid input):

     if (user_num==1 && comp_num==1)
            {

                cout << "You both choose Red! its tie!";

            }
            else if (user_num==2 && comp_num==2)
                {

                cout << "You both choose Blue! its tie!";
            }
            else if(user_num==3 && comp_num==3)
                {

                cout << "You both choose Green! its tie!";
            }
            else if(user_num==2 && comp_num == 1)
                {

                    cout << " Blue beats Red!you win!";
                    }


            else if(user_num==3 && comp_num==2)
                {

                cout << "Green beats Blue you win!";
            }
            else if(user_num==3 && comp_num==1)
            {

                cout << "Green beats  Red! you win!";
            }
            else if (comp_num==2 && user_num == 1)
            {

                cout << "Blue beats Red! you loose!";

            }
            else if (comp_num==3 && user_num == 2)
                {
                cout << "Green beats Blue! you loose!";
            }
            else if (comp_num==3 && user_num == 1)
                {
                cout << "Green beats Red! you loose!";
            }



    else {
    cout << "Invalid Input.Terminating Program.";
    }



  

    // Exit the program:
    return 0;
}
