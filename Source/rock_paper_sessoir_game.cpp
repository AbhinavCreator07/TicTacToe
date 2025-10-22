#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void startGame();
void resetGame();

int main()
{
    int userInput;

    cout << "Welcome to rock paper scissor game : " << endl;
    cout << "Press 1 to start" << endl;
    cin >> userInput;

    if (userInput == 1)
    {
        // calling start game :
        startGame();
    }

    if (userInput != 1)
    {
        // end the program :
        cout << "" << endl;
    }
    return 0;
}
void startGame()
{
    // random number generation :
    srand(time(NULL));
    int min = 1;
    int max = 100;
    int random = min + (rand() % (max - min + 1));

    int userMove;
    string computerInput;

    cout << "Select anymove : 0 = Rock, 1 = Paper, 2 = scissor" << endl;
    cin >> userMove;
    cout << endl;
    // condition check for user:

    if (userMove == 0)
    {
        cout << "Player: rock" << endl;
    }
    else if (userMove == 1)
    {
        cout << "Player: Paper" << endl;
    }
    else if (userMove == 2)
    {
        cout << "Player: Scissor" << endl;
    }

    // now checking conditions for computer :

    if (random <= 33)
    {
        cout << "Computer: Rock" << endl;
        computerInput = "Rock";
    }
    else if (random > 33 || random < 66)
    {
        cout << "Computer: Paper" << endl;
        computerInput = "Paper";
    }
    else if (random > 66 || random <= 100)
    {
        cout << "Computer: Scissor" << endl;
        computerInput = "Scissor";
    }

    // Win, loss or draw conditions :

    // Draws conditions :
    if (userMove == 0 && computerInput == "Rock")
    {
        cout << "Its a draw" << endl;
        resetGame();
    }
    else if (userMove == 1 && computerInput == "Paper")
    {
        cout << "Its a draw" << endl;
        resetGame();
    }
    else if (userMove == 2 && computerInput == "Scissor")
    {
        cout << "Its a draw" << endl;
        resetGame();
    }

    // User Winning condtitions :
    if (userMove == 0 && computerInput == "Scissor")
    {
        cout << "You win" << endl;
        resetGame();
    }
    else if (userMove == 1 && computerInput == "Rock")
    {
        cout << "You win" << endl;
        resetGame();
    }
    else if (userMove == 2 && computerInput == "Paper")
    {
        cout << "You win" << endl;
        resetGame();
    }

    // Computer Winning Conditions :
    if (computerInput == "Rock" && userMove == 2)
    {
        cout << "Computer wins" << endl;
        resetGame();
    }
    else if (computerInput == "Paper" && userMove == 0)
    {
        cout << "Computer wins" << endl;
        resetGame();
    }
    else if (computerInput == "Scissor" && userMove == 1)
    {
        cout << "Computer wins" << endl;
        resetGame();
    }
}
void resetGame()
{
    char userChoice;
    cout << "Press Y to restart, Press any key to end this program" << endl;

    cin >> userChoice;

    if (userChoice == 'Y' || userChoice == 'y')
    {
        // call the function to run the game again :
        startGame();
    }
    else if (userChoice != 'Y' || userChoice != 'y')
    {
        // close the program :
        cout << "Thanks for playing the game" << endl;
    }
    
}
