// Jordan Steer-Furderer
// CIS 25
// CONNECT FOUR!!

#include <iostream>
using namespace std;

// this function handles printing adjusting the index at the position the user chooses
bool placePiece (char board[][7], int input, char playerPiece){
    for(int i = 6; i >= 0 ; i--){
        if (board[i][input] == '-'){
            board[i][input] = playerPiece;
            break;
        }
    }
}

// this function just prints the board whenever it's called
void printBoard (char board[][7]){
    for (int r = 0; r < 6; r++){
        for (int c = 0; c < 7; c++){
            cout << board[r][c] << " ";
        }
        cout << endl;
    }
    cout << "=============" << endl;
}

// this function collects user data to choose which column to place a piece into
int askColumn (int playerNumber, char board[][7]) {

    bool userInputOk = false;
    int columnChoice = -1;
    while(!userInputOk) {

        cout << "Player " << playerNumber <<  " pick column 0 - 6" << endl;
        cin >> columnChoice;

        if (columnChoice >= 0 && columnChoice <= 6) {

            if( board[0][columnChoice] == '-') {

                userInputOk = true;
                break;
            } else {

                cout << "try again position already full" << endl;
            }


        } else {
            cout << "try again out of range error" << endl;
        }

    }

    return columnChoice;
}

// this board decides if there are no remaining "open" spaces, in other words, a '-' character
bool checkFullBoard(char board[][7]){
    int index = 0;
    while(index <= 20){
    for (int r = 0; r < 6; r++) {
        for (int c = 0; c < 7; c++) {

            if (board[r][c] != '-'){

                    return true;
            }

        }

    }

}

}

int main(){
game:
    int columnChoice;
    char x;
    char o;
    cout << "Welcome to Connect Four" << endl;

    cout << "=============" << endl;

    char board[6][7] = {    {'-', '-', '-', '-', '-', '-', '-'},
                            {'-', '-', '-', '-', '-', '-', '-'},
                            {'-', '-', '-', '-', '-', '-', '-'},
                            {'-', '-', '-', '-', '-', '-', '-'},
                            {'-', '-', '-', '-', '-', '-', '-'},
                            {'-', '-', '-', '-', '-', '-', '-'},
                                                              };
    printBoard(board);

    int currentPlayer = 1;
    char playerPiece = 'x';
    while(true)
    {

        int userInput = askColumn(currentPlayer, board);

        placePiece(board, userInput, playerPiece);

        printBoard(board);


        if(currentPlayer == 1)
        {
            currentPlayer = 2;
            playerPiece = 'o';
        }
        else
        {
            currentPlayer = 1;
            playerPiece = 'x';
        }

               if (board[0][0] != '-' && board[0][1] != '-' && board[0][2] != '-' && board[0][3] != '-' &&
            board[0][4] != '-' && board[0][5] != '-' && board[0][6] != '-')
        {

            cout << "BOARD FULL" << endl;
            goto game;

        }


    }

    return 0;

}
