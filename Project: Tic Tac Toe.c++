#include <iostream>
using namespace std;

char board[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

void showBoard() {
    for (int i = 0; i < 3; i++) {
        cout << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << endl;
    }
}

int main() {
    int move;
    char player = 'X';

    for (int turn = 0; turn < 9; turn++) {
        showBoard();
        cout << "Player " << player << " choose: ";
        cin >> move;

        int row = (move-1)/3;
        int col = (move-1)%3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            cout << "Invalid move!\n";
            turn--;
            continue;
        }

        board[row][col] = player;

        player = (player == 'X') ? 'O' : 'X';
    }

    showBoard();
}
