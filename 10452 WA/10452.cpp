#include<stdio.h>	

int main()
{
	char matrix[10][10], ch;
	int i, j, k, cases, row, col, startx, starty;

	freopen("iehova.txt", "r", stdin);

	for(i = 0; i < 10; i++)
		for(j = 0; j < 10; j++)
			matrix[i][j] = 'X';
	
	scanf("%d", &cases);
	for(i = 0; i < cases; i++)
	{
		startx = starty = -1;
		scanf("%d %d", &row, &col);
		for(j = 1; j <= row; j++)
			for(k = 1; k <= col; k++)
			{
				scanf("%c", &ch);
				if(ch >= 'A' && ch <= 'Z' || ch == '@' || ch == '#')
					matrix[j][k] = ch;
				else
					k--;
			}

		for(j = 0; j < col; j++)
			if(matrix[row][j] == '@') 
			{
				startx = row;
				starty = j;
			}

		if(startx == -1 && starty == -1) continue;

		if(matrix[startx][starty+1] == 'I')
		{
			printf("right ");
			starty++;
		}
		else if(matrix[startx][starty-1] == 'I')
		{
				printf("left ");
				starty--;
		}
        else if(matrix[startx-1][starty] == 'I')
		{
			printf("forth ");
			startx--;
		}
		
		if(matrix[startx][starty+1] == 'E')
		{
			printf("right ");
			starty++;
		}
		else if(matrix[startx][starty-1] == 'E')
		{
				printf("left ");
				starty--;
		}
        else if(matrix[startx-1][starty] == 'E')
		{
			printf("forth ");
			startx--;
		}

		if(matrix[startx][starty+1] == 'H')
		{
			printf("right ");
			starty++;
		}
		else if(matrix[startx][starty-1] == 'H')
		{
				printf("left ");
				starty--;
		}
        else if(matrix[startx-1][starty] == 'H')
		{
			printf("forth ");
			startx--;
		}

		if(matrix[startx][starty+1] == 'O')
		{
			printf("right ");
			starty++;
		}
		else if(matrix[startx][starty-1] == 'O')
		{
				printf("left ");
				starty--;
		}
        else if(matrix[startx-1][starty] == 'O')
		{
			printf("forth ");
			startx--;
		}

		if(matrix[startx][starty+1] == 'V')
		{
			printf("right ");
			starty++;
		}
		else if(matrix[startx][starty-1] == 'V')
		{
				printf("left ");
				starty--;
		}
        else if(matrix[startx-1][starty] == 'V')
		{
			printf("forth ");
			startx--;
		}

		if(matrix[startx][starty+1] == 'A')
		{
			printf("right ");
			starty++;
		}
		else if(matrix[startx][starty-1] == 'A')
		{
				printf("left ");
				starty--;
		}
        else if(matrix[startx-1][starty] == 'A')
		{
			printf("forth ");
			startx--;
		}

		if(matrix[startx][starty+1] == '#')
		{
			printf("right\n");
			starty++;
		}
		else if(matrix[startx][starty-1] == '#')
		{
				printf("left\n");
				starty--;
		}
        else if(matrix[startx-1][starty] == '#')
		{
			printf("forth\n");
			startx--;
		}
	}

	return 0;
}

	
