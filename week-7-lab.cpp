#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand( time(NULL)); 
    int player;
    int bet;
    int purse = 500;
    int random = rand() % 2; // seed for the random 1 or 0

    cout << "Welcome to Binary Roulette!! You have $" << purse << " to play with!!" << endl;

        while (purse>0)
        {
            cout << "You have $" << purse << endl;
            cout << "How much would you like to bet?" << endl;  //beginning of the loop, takes bet
            cin >> bet;


            if ( bet <= purse)
            {
                cout << "To play, please choose a 1 or 0" << endl;  //asking for player input
                cin >> player;

                if (player == random)
                {

                   cout << "The wheel is spun and it lands on " << random << endl; //part of loop for if player wins with math operations to change purse
                   cout << "YOU WIN!!" << endl;
                   purse = purse - bet;
                   purse = bet * 2 + purse;
                   cout << "Your current purse is: $" << purse << endl;

                }


                    else if ( player == 0 || player == 1)
                    {
                        cout << "The wheel is spun and it lands on " << random << endl; // part of loop for a loss with operations to change purse
                        cout << "Sorry! You lose! Play again!" << endl;
                        purse = purse - bet;
                        cout << "Your current purse is: $" << purse << endl;
                    }

                    else
                    {
                        cout << "You need to enter a '1' or '0' to play!" << endl; //player needs to enter 1 or 0 or they are booted from program
                        break;
                    }

            }

            else
            {
                cout << "You don't have the money!" << endl;
                cout << "You have : $" << purse << endl;
                cout << "You must make you bet less than or equal to: $" << purse << endl; //wehn player tries to bet an invalid amount

            }


        }

        cout << "Bye now!" << endl;





       return 0; 
        }