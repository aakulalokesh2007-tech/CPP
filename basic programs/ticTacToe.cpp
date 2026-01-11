#include <iostream>
#include <ctime>

void drawBoard(const char board[3][3]) {
    std::cout << "Current Board:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << board[i][j] << " ";
        }
        std::cout << "\n";
    }
}
void playerMove(char board[3][3], char player) {
    int row, col;
    
    std::cout << "Player " << player << ", enter your move (row and column): ";
    std::cin >> row >> col;
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = player;
        
    } else {
        std::cout << "Invalid move. Try again.\n";
    }
    }


void computerMove(char board[3][3], char computer) {
    int row, col;
    while (true) {
        row = rand() % 3;
        col = rand() % 3;
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            std::cout << "Computer placed " << computer << " at (" << row << ", " << col << ").\n";
            break;
        }
    }
}   

bool checkWin(const char board[3][3], char player) {
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || // Rows
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) { // Columns
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || // Diagonal
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}   
bool checkDraw(const char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return false; // Found an empty space, not a draw
            }
        }
    }
    return true; // No empty spaces, it's a draw
}
int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    char player = 'X';
    char computer = 'O';

    while (true) {
        drawBoard(board);
        playerMove(board, player);
        if (checkWin(board, player)) {
            drawBoard(board);
            std::cout << "Player " << player << " wins!\n";
            break;
        }
        if (checkDraw(board)) {
            drawBoard(board);
            std::cout << "It's a draw!\n";
            break;
        }

        computerMove(board, computer);
        if (checkWin(board, computer)) {
            drawBoard(board);
            std::cout << "Computer " << computer << " wins!\n";
            break;
        }
        if (checkDraw(board)) {
            drawBoard(board);
            std::cout << "It's a draw!\n";
            break;
        }
    }

    return 0;
}
