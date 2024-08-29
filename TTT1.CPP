#include<iostream.h>

const int SIZE = 3;
char board[SIZE][SIZE];
void initializeBoard() 
{
    for(int i = 0; i < SIZE; ++i) 
    {
        for(int j = 0; j < SIZE; ++j) 
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard() 
{
    for(int i = 0; i < SIZE; ++i)
     {
        for(int j = 0; j < SIZE; ++j) 
        {
            cout << board[i][j];
            if(j < SIZE - 1) cout << '|';
        }
        cout << endl;
        if(i < SIZE - 1) cout << "-----\n";
    }
}

int checkWin(char player)
 {
    for(int i = 0; i < SIZE; ++i)
    {
	if((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
	   (board[0][i] == player && board[1][i] == player && board[2][i] == player))
	    {
	    return 1;
	}
    }

    if((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
       (board[0][2] == player && board[1][1] == player && board[2][0] == player))
    {
    return 1;
    }
    return 0;
}


int checkDraw()
 {
    for(int i = 0; i < SIZE; ++i)
    {
	for(int j = 0; j < SIZE; ++j)
	{
	    if(board[i][j] == ' ')
	    {
		return 0;
	    }
	}
    }
    return 1;
}


int makeMove(char player)
{
    int row, col;
    while(1)
     {
	cout << "Player " << player << ", enter your move (row and column): ";
	cin >> row >> col;
	if(row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == ' ')
	 {
	    board[row][col] = player;
	    return 1;
	}
	 else
	{
	  cout << "Invalid move, try again." << endl;
	}
    }
}

int main()
 {
    char currentPlayer = 'X';
    int  gameOver = 0;
    char playAgain;

    do {
	initializeBoard();
	gameOver = 0;

	while(!gameOver)
	{
	    printBoard();
	    makeMove(currentPlayer);

	    if(checkWin(currentPlayer))
	    {
		printBoard();
		cout << "Player " << currentPlayer << " wins!" << endl;
		gameOver = 1;
	    }
	    else if(checkDraw())
	    {
		printBoard();
		cout << "It's a draw!" << endl;
		gameOver = 1;
	    }
	     else
	    {
		currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
	    }
	}

	cout << "Do you want to play again? (y/n): ";
	cin >> playAgain;
	if(playAgain == 'y' || playAgain == 'Y')
	{
	    currentPlayer = 'X';
	}

    } while(playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing!" << endl;
return 0;
}