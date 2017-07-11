#include<stdio.h>

int main()
{
	char grid[100][100];
	int i, j, deposit, pocket, count;

	freopen("oil.txt", "r", stdin);

	while(1)
	{
		scanf("%d %d", &row, &col);

		if( row == 0 && col == 0) break;
		
		for(i = 0; i < row; i++)
			for(j = 0; j < col; j++)
			{
				scanf("%c", ch);
				if(ch == '*' || ch == '@') grid[i][j] = ch;
				else j--;
			}
		for(i = 0; i < row; i++)
			for(j = 0; j < col; j++)
				if(grid[i][j] == '@')
					if(grid[i][j+1] == '@' || grid[i][j-1] == '@' || grid[i+1][j] == '@' ||
					   grid[i-1][j+1] == '@' || grid[i+1][j+1] == '@' || grid[i+1][j-1] == '@' ||
					   grid[i][j+1] == '@' || grid[i][j+1] == '@' ||)
	}

	return 0;
}
