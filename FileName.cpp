#include<iostream>
using namespace std;
void main()
{
	char R = 'R';
	char B = 'B';
	char board[10][10];
	int cselection;
	int turn = 1;
	int r;
	int winner = 0;
	for (int r = 0; r < 10; r++)
	{
		for (int c = 0; c < 10; c++)
		{
			board[r][c] = ' ';
		}
	}
	for (;;)
	{
		if (turn == 1)
		{
			cout << "Player 1 Choose a Column";
			cin >> cselection;
			for (r = 9; r >=0 ; r--) 
			{
				if (board[r][cselection] == ' ')
				{
					board[r][cselection] = R;
					break;
				}
			}
			for (int r = 0; r < 10; r++)
			{
				for (int c = 0; c < 10; c++)
				{
					if (board[r][c] == R)
					{
						if (board[r][c + 1] == R && board[r][c + 2] == R && board[r][c + 3] == R && c<=6)
						{
							winner = 1;
						}
						if (board[r + 1][c] == R && board[r + 2][c] == R && board[r + 3][c] == R && r<=6)
						{
							winner = 1;
						}
						if (board[r + 1][c + 1] == R && board[r + 2][c + 2] == R && board[r + 3][c + 3] == R && r<=6 && c<=6)
						{
							winner = 1;
						}
						if (board[r - 1][c - 1] == R && board[r - 2][c - 2] == R && board[r - 3][c - 3] == R && r>=3 && c>=3)
						{
							winner = 1;
						}
					}
				}
			}
			for (int r = 0; r < 10; r++) 
			{
				for (int c = 0; c < 10; c++) 
				{
					cout << board[r][c] << " ";
				}
				cout << endl;
			}
			cout << endl;
			if (winner == 1)
			{
				break;
			}
			turn++;
		}
		if (turn == 2)
		{
			cout << "Player 2 Choose a Column";
			cin >> cselection;
			for (int r = 9; r >= 0; r--)
			{
				if (board[r][cselection] == ' ')
				{
					board[r][cselection] = B;
					break;
				}
			}
				for (int r = 0; r < 10; r++)
				{
					for (int c = 0; c < 10; c++)
					{
						if (board[r][c] == B)
						{
							if (board[r][c + 1] == B && board[r][c + 2] == B && board[r][c + 3] == B && c <= 6)
							{
								winner = 2;
							}
							if (board[r + 1][c] == B && board[r + 2][c] == B && board[r + 3][c] == B && r <= 6)
							{
								winner = 2;
							}
							if (board[r + 1][c + 1] == B && board[r + 2][c + 2] == B && board[r + 3][c + 3] == B && r <= 6 && c <= 6)
							{
								winner = 2;
							}
							if (board[r - 1][c - 1] == B && board[r - 2][c - 2] == B && board[r - 3][c - 3] == B && r >= 3 && c >= 3)
							{
								winner = 2;
							}
						}
					}
				}
		}
		for (int r = 0; r < 10; r++)
		{
			for (int c = 0; c < 10; c++)
			{
				cout << board[r][c] << " ";
			}
			cout << endl;
		}
		cout << endl;
		if (winner == 2)
		{
			break;
		}
		turn--;
	}
	if (winner == 1)
	{
		cout << "Red Wins!";
	}
	if (winner == 2)
	{
		cout << "Blue Wins!";
	}
}