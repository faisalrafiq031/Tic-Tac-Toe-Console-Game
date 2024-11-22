#include <iostream>
#include <vector>

using namespace std;

// Function to display the board
void displayBoard(const vector<char>& board) {
    cout << "\n";
    for (int i = 0; i < 9; i++) {
        cout << " " << board[i];
        if ((i + 1) % 3 == 0) {
            cout << "\n";
            if (i != 8) cout << "---|---|---\n";
        } else {
            cout << " |";
        }
    }
    cout << "\n";
}

// Function to check if there's a winner
bool checkWinner(const vector<char>& board, char player) {
    // Winning combinations
    int winCombos[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Rows
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Columns
        {0, 4, 8}, {2, 4, 6}             // Diagonals
    };

    for (auto& combo : winCombos) {
        if (board[combo[0]] == player && board[combo[1]] == player && board[combo[2]] == player) {
            return true;
        }
    }
    return false;
}

// Function to check if the board is full
bool isBoardFull(const vector<char>& board) {
    for (char cell : board) {
        if (cell == ' ') return false;
    }
    return true;
}

// Main function
int main() {
    vector<char> board(9, ' '); // Initialize the board with empty spaces
    char currentPlayer = 'X';  // Start with player 'X'
    int move;

    cout << "Welcome to Tic-Tac-Toe!\n";
    displayBoard(board);

    while (true) {
        cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        cin >> move;

        if (move < 1 || move > 9 || board[move - 1] != ' ') {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        board[move - 1] = currentPlayer;
        displayBoard(board);

        if (checkWinner(board, currentPlayer)) {
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        if (isBoardFull(board)) {
            cout << "It's a draw!\n";
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // Switch player
    }

    return 0;
}
