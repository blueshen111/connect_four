// Jordan Steer-Furderer
// CIS 25
// CONNECT FOUR

#include <iostream>
using namespace std;

int main()
{

int columnChoice;
0 <= columnChoice <= 6;
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
////THIS IS THE GAME BOARD////
for (int r = 0; r < 6; r++){
    for (int c = 0; c < 7; c++){
    cout << board[r][c] << " ";
    }
    cout << endl;
    }
    cout << "=============" << endl;
//////////////////////////////

int index = 0;
while (index < 21) {
//int index = 0;
//while(index <= 0) {

cout << "Player 1 pick column 0 - 6" << endl;
cin >> columnChoice;

if  (board[5][columnChoice] != 'x' && board[5][columnChoice] != 'o'){
    (board[5][columnChoice] = 'x');}
    else { if (board[4][columnChoice] != 'x' && board[4][columnChoice] != 'o'){
              (board[4][columnChoice] = 'x');
    }
        else {if (board[3][columnChoice] != 'x' && board[3][columnChoice] != 'o'){
                     (board[3][columnChoice] = 'x');
        }
            else {if (board[2][columnChoice] != 'x' && board[2][columnChoice] != 'o'){
                     (board[2][columnChoice] = 'x');
            }
                else {if (board[1][columnChoice] != 'x' && board[1][columnChoice] != 'o'){
                      (board[1][columnChoice] = 'x');
                }
                    else {if (board[0][columnChoice] != 'x' && board[0][columnChoice] != 'o'){
                      (board[0][columnChoice] = 'x');
                    }
                         else {if (board[0][columnChoice] != '-'){
                         cout << "Try again"<< endl;
                         cout << "Player 1 pick column 0 - 6" << endl;
                         cin >> columnChoice;

    if  (board[5][columnChoice] != 'x' && board[5][columnChoice] != 'o'){
    (board[5][columnChoice] = 'x');}
    else { if (board[4][columnChoice] != 'x' && board[4][columnChoice] != 'o'){
              (board[4][columnChoice] = 'x');
    }
        else {if (board[3][columnChoice] != 'x' && board[3][columnChoice] != 'o'){
                     (board[3][columnChoice] = 'x');
        }
            else {if (board[2][columnChoice] != 'x' && board[2][columnChoice] != 'o'){
                     (board[2][columnChoice] = 'x');
            }
                else {if (board[1][columnChoice] != 'x' && board[1][columnChoice] != 'o'){
                      (board[1][columnChoice] = 'x');
                }
                    else {if (board[0][columnChoice] != 'x' && board[0][columnChoice] != 'o'){
                      (board[0][columnChoice] = 'x');
                    }


     }
    }
   }
  }
 }
}

     }
    }
   }
  }
 }
}

cout << "=============" << endl;
for (int r = 0; r < 6; r++){


    for (int c = 0; c < 7; c++){



    cout << board[r][c] << " ";


    }

    cout << endl;
    }
    cout << "=============" << endl;





cout << "Player 2 pick column 0 - 6" << endl;

cin >> columnChoice;

if  (board[5][columnChoice] != 'x' && board[5][columnChoice] != 'o'){
    (board[5][columnChoice] = 'o');}
    else { if (board[4][columnChoice] != 'x' && board[4][columnChoice] != 'o'){
              (board[4][columnChoice] = 'o');
    }
        else {if (board[3][columnChoice] != 'x' && board[3][columnChoice] != 'o'){
                     (board[3][columnChoice] = 'o');
        }
            else {if (board[2][columnChoice] != 'x' && board[2][columnChoice] != 'o'){
                     (board[2][columnChoice] = 'o');
            }
                else {if (board[1][columnChoice] != 'x' && board[1][columnChoice] != 'o'){
                      (board[1][columnChoice] = 'o');
                }
                    else {if (board[0][columnChoice] != 'x' && board[0][columnChoice] != 'o'){
                      (board[0][columnChoice] = 'o');
                    }
                        else {if (board[0][columnChoice] != 'x'){
                        cout << "Try again" << endl;
                        cout << "Player 2 pick column 0 - 6" << endl;
                        cin >> columnChoice;

                        if  (board[5][columnChoice] != 'x' && board[5][columnChoice] != 'o'){
    (board[5][columnChoice] = 'o');}
    else { if (board[4][columnChoice] != 'x' && board[4][columnChoice] != 'o'){
              (board[4][columnChoice] = 'o');
    }
        else {if (board[3][columnChoice] != 'x' && board[3][columnChoice] != 'o'){
                     (board[3][columnChoice] = 'o');
        }
            else {if (board[2][columnChoice] != 'x' && board[2][columnChoice] != 'o'){
                     (board[2][columnChoice] = 'o');
            }
                else {if (board[1][columnChoice] != 'x' && board[1][columnChoice] != 'o'){
                      (board[1][columnChoice] = 'o');
                }
                    else {if (board[0][columnChoice] != 'x' && board[0][columnChoice] != 'o'){
                      (board[0][columnChoice] = 'o');
                    }



     }
    }
   }
  }
 }
}

     }
    }
   }
  }
 }
}

cout << "=============" << endl;
for (int r = 0; r < 6; r++){

    for (int c = 0; c < 7; c++){

    cout << board[r][c] << " ";

    }

    cout << endl;
    }
    cout << "=============" << endl;


   // index++;
//}




index++;

}

cout << "BOARD FULL" << endl;













return 0;

}
