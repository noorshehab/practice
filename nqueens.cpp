#include<string.h>
#include <iostream>
using namespace std;
# define N 4
bool issafe(int grid[N][N], int row, int col)
{
	for (int i = 0; i < N; i++)
	{
		if (grid[row][i] == 1)
			return false;
	}
	for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (grid[i][j])
			return false;

	/* Check lower diagonal on left side */
	for (int i = row, j = col; j >= 0 && i < N; i++, j--)
		if (grid[i][j])
			return false;
	return true;
}
void display(int grid[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (grid[i][j])
				cout << " & " ;
			else
				cout << " 0 ";
		}
		cout << endl;
	}
}

bool solventill(int grid[N][N], int col)
{
	if (col >= N)
	{
		return true;
	}
	for (int i = 0; i < N; i++)
	{
		
		if (issafe(grid, i, col)) {
			grid[i][col] = 1;
			if (solventill(grid, col + 1))
				return true;
			grid[i][col] = 0;
		}

	}
	return false;
}
int main()
{
	int nqueens[N][N] = { };
	
		solventill(nqueens, 0);
	
	display(nqueens);
	
	
}
