#include <bits/stdc++.h>
using namespace std;

struct BoardHasher {
    size_t operator()(const char (&board)[5][5]) const {
        size_t hash = 0;
        for (int row = 0; row < 5; row++) {
            for (int col = 0; col < 5; col++) {
                hash = hash * 31 + board[row][col];
            }
        }
        return hash;
    }
};

void showBoard(char board[][5]) {
    cout << endl;
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool check(char board[][5], char moves) {
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 3; col++) {
            if (board[row][col] == board[row][col + 1] && board[row][col] == board[row][col + 2] && board[row][col] == moves) {
                return true;
            }
        }
    }

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 5; col++) {
            if (board[row][col] == board[row + 1][col] && board[row][col] == board[row + 2][col] && board[row][col] == moves) {
                return true;
            }
        }
    }

    if (board[0][0] == board[1][1] && board[0][0] == moves && board[1][1] ==  board[2][2]) return true;
    if (board[1][1] == board[2][2] && board[1][1] == moves && board[2][2] ==  board[3][3]) return true;
    if (board[2][2] == board[3][3] && board[2][2] == moves && board[3][3] ==  board[4][4]) return true;

    if (board[4][0] == board[3][1] && board[4][0] == moves && board[3][1] ==  board[2][2]) return true;
    if (board[3][1] == board[2][2] && board[3][1] == moves && board[2][2] ==  board[1][3]) return true;
    if (board[2][2] == board[1][3] && board[2][2] == moves && board[1][3] ==  board[0][4]) return true;

    if (board[1][0] == board[2][1] && board[1][0] == moves && board[2][1] ==  board[3][2]) return true;
    if (board[2][1] == board[3][2] && board[2][1] == moves && board[3][2] ==  board[4][3]) return true;
    if (board[2][0] == board[3][1] && board[2][0] == moves && board[3][1] ==  board[4][2]) return true;


    if (board[0][1] == board[1][2] && board[0][1] == moves && board[1][2] ==  board[2][3]) return true;
    if (board[1][2] == board[2][3] && board[1][2] == moves && board[2][3] ==  board[3][4]) return true;
    if (board[0][2] == board[1][3] && board[0][2] == moves && board[2][4] ==  board[1][3]) return true;

    if (board[4][1] == board[3][2] && board[4][1] == moves && board[3][2] ==  board[2][3]) return true;
    if (board[3][2] == board[2][3] && board[3][2] == moves && board[2][3] ==  board[1][4]) return true;
    if (board[4][2] == board[3][3] && board[4][2] == moves && board[3][3] ==  board[2][4]) return true;

    if (board[3][0] == board[2][1] && board[3][0] == moves && board[2][1] ==  board[1][2]) return true;
    if (board[0][3] == board[2][1] && board[0][3] == moves && board[2][1] ==  board[1][2]) return true;
    if (board[2][0] == board[1][1] && board[2][0] == moves && board[1][1] ==  board[0][2]) return true;
    return false;
}

bool checkFull(char board[][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (board[i][j] == '_') {
                return false;
            }
        }
    }
    return true;
}
int evaluate(char board[][5]) {
    if (check(board, 'X'))
        return -1;
    if (check(board, 'O'))
        return 1;
    return 0;
}

int minimax(char board[][5], int depth, int alpha, int beta, bool maxPlayer, unordered_map<char[][5], int, BoardHasher>& transpositionTable) {
    // Check if the current board state is already evaluated in the transposition table
    auto it = transpositionTable.find(board);
    if (it != transpositionTable.end()) {
        return it->second;
    }

    // Check for terminal states
    if (check(board, 'X')) {
        return -1;
    }
    if (check(board, 'O')) {
        return 1;
    }
    if (checkFull(board) || depth == 0) {
        return 0;
    }

    if (maxPlayer) {
        int maxEval = INT_MIN;
        for (int row = 0; row < 5; row++) {
            for (int col = 0; col < 5; col++) {
                if (board[row][col] == '_') {
                    board[row][col] = 'O';
                    int eval = minimax(board, depth - 1, alpha, beta, false, transpositionTable);
                    board[row][col] = '_';
                    maxEval = max(maxEval, eval);
                    alpha = max(alpha, eval);
                    if (beta <= alpha) {
                        break;
                    }
                }
            }
        }

        // Store the evaluated value in the transposition table
        transpositionTable[board] = maxEval;

        return maxEval;
    } else {
        int minEval = INT_MAX;
        for (int row = 0; row < 5; row++) {
            for (int col = 0; col < 5; col++) {
                if (board[row][col] == '_') {
                    board[row][col] = 'X';
                    int eval = minimax(board, depth - 1, alpha, beta, true, transpositionTable);
                    board[row][col] = '_';
                    minEval = min(minEval, eval);
                    beta = min(beta, eval);
                    if (beta <= alpha) {
                        break;
                    }
                }
            }
        }

        // Store the evaluated value in the transposition table
        transpositionTable[board] = minEval;

        return minEval;
    }
}

void findBestMove(char board[][5]) {
    int bestEval = INT_MIN;
    int MaxRw = -1;
    int MaxCl = -1;

    int alpha = INT_MIN;
    int beta = INT_MAX;

    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            if (board[row][col] == '_') {
                board[row][col] = 'O';
                int eval = minimax(board, 7, alpha, beta, false, transpositionTable);
                board[row][col] = '_';

                if (eval > bestEval) {
                    bestEval = eval;
                    MaxRw = row;
                    MaxCl = col;
                }

                alpha = max(alpha, eval);
                beta = min(beta, eval);
            }
        }
    }

    board[MaxRw][MaxCl] = 'O';
}


int main() {
    char board[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            board[i][j] = '_';
        }
    }

    cout << "-----------Welcome to tic-tac-toe-----------\n\n ";
    showBoard(board);

    while (!checkFull(board) && !check(board, 'X') && !check(board, 'O')) {
        int row, col;

        cout << "Enter row and column (1-5): ";
        cin >> row >> col;
        row--, col--;

        if (row < 0 || row > 4 || col < 0 || col > 4 || board[row][col] != '_') {
            cout << "Sorry, Invalid move! Try again." << endl;
            continue;
        }

        board[row][col] = 'X';
        showBoard(board);
        if (check(board, 'X')) {
            showBoard(board);
            cout << "You win!" << endl;
            break;
        }

        if (checkFull(board)) {
            showBoard(board);
            cout << "Match draw!" << endl;
            break;
        }

        findBestMove(board);
        cout << "Computer's move:" << endl;
        showBoard(board);

        if (check(board, 'O')) {
            showBoard(board);
            cout << "Computer wins!" << endl;
            break;
        }

        if (checkFull(board)) {
            cout << "Match draw!" << endl;
            break;
        }
    }

    return 0;
}
