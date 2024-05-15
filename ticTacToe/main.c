#include <stdio.h>

// Function to display the game board
void display_board(char board[3][3])
{
    printf("\n");
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// Function to check if the game has been won
int check_win(char board[3][3], char mark)
{
    // Check rows and columns
    for (int i = 0; i < 3; i++)
    {
        if ((board[i][0] == mark && board[i][1] == mark && board[i][2] == mark) ||
            (board[0][i] == mark && board[1][i] == mark && board[2][i] == mark))
        {
            return 1; // Win
        }
    }
    // Check diagonals
    if ((board[0][0] == mark && board[1][1] == mark && board[2][2] == mark) ||
        (board[0][2] == mark && board[1][1] == mark && board[2][0] == mark))
    {
        return 1; // Win
    }
    return 0; // No win
}

int main()
{
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};
    int row, col;
    char currentPlayer = 'X';
    int moves = 0;

    printf("Welcome to Tic Tac Toe!\n");

    // Game loop
    while (1)
    {
        // Display board
        display_board(board);

        // Player input
        printf("Player %c, enter row (0-2) and column (0-2): ", currentPlayer);
        scanf("%d %d", &row, &col);

        // Check if cell is empty and within bounds
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ')
        {
            board[row][col] = currentPlayer;
            moves++;

            // Check for win
            if (check_win(board, currentPlayer))
            {
                display_board(board);
                printf("Player %c wins!\n", currentPlayer);
                break;
            }
            // Check for dr0aw
            if (moves == 9)
            {
                display_board(board);
                printf("It's a draw!\n");
                break;
            }
            // Switch player
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
        else
        {
            printf("Invalid move. Try again.\n");
        }
    }

    return 0;
}
