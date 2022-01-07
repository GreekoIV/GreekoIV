#include <iostream>

using namespace std;

int main()
{

    int secretNum = 8;
    int guess;
    int guessCount = 0;
    int guessLimit = 4;
    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses){

        if(guessCount < guessLimit){

            cout << "Enter Guess: \n";
            cin >> guess;
            guessCount++;

        }else{
            outOfGuesses= true;
        }

    }
    if(outOfGuesses){
        cout<<"You lose!\n";
    }else{
        cout<<"You won!\n";
    }



    return 0;
}
