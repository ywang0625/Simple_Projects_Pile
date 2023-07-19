
/*
 * Title: Tic Tac Toe
 * Files: TicTacToe_attempt.cpp
 * Author: Yueh-Ming Wang
 * Date: 19 July 2023
*/

#include <iostream>
using namespace std;

char square[10] = {'0','1', '2', '3', '4', '5', '6',
                   '7', '8', '9'};

int checkwin();
void board();

int checkwin(){
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
             && square[4] != '4' && square[5] != '5' && square[6] != '6'
             && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;

}

void board(){
    system("cls");

    cout << "=============== Welcome to Tic Tac Toe ===============" << endl;
    cout << "Instruction:" << endl << "     - Player 1 = 'O'"
    << endl << "     - Player 2 = 'X'" << endl<<
    "     - The first player makes a line with 3 marks win" << endl << endl << endl;

    cout << "==================" << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2]
    << "  |  " << square[3] << "  " << endl;
    cout << "     |     |     " << endl;

    cout << "------------------" << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[4] << "  |  " << square[5]
         << "  |  " << square[6] << "  " << endl;
    cout << "     |     |     " << endl;

    cout << "------------------" << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[7] << "  |  " << square[8]
         << "  |  " << square[9] << "  " << endl;
    cout << "     |     |     " << endl;

    cout << "==================" << endl;
}


int main()
{
    int player = 1, i, input;
    char mark;

    do {
        board();
        player = (player % 2) ? 1 : 2;

        cout << "Player " << player << ":" << endl
        << "Please enter your desired spot: ";
        cin >> input;

        mark = (player == 1) ? 'O' : 'X';
        //i = checkwin();

        if (input == 1 && square[1] == '1')
            square[1] = mark;
        else if (input == 2 && square[2] == '2')
            square[2] = mark;
        else if (input == 3 && square[3] == '3')
            square[3] = mark;
        else if (input == 4 && square[4] == '4')
            square[4] = mark;
        else if (input == 5 && square[5] == '5')
            square[5] = mark;
        else if (input == 6 && square[6] == '6')
            square[6] = mark;
        else if (input == 7 && square[7] == '7')
            square[7] = mark;
        else if (input == 8 && square[8] == '8')
            square[8] = mark;
        else if (input == 9 && square[9] == '9')
            square[9] = mark;
        else {
            cout << "Error: You've entered an invalid spot";
            cin.ignore();
            cin.get();
            player--;
        }
        i = checkwin();
        player++;
    }
    while(i == -1);

    board();
    if (i == 1) {
        cout << "     YOU WIN!";
        return 0;
    }
    else {
        cout << "     DRAW!";
    return 0;
    }
    cin.ignore();
    cin.get();

    return 0;
}

