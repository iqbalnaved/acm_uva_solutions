#include<stdio.h>

int main()
{
	char sentence[100][100], ch;
	int i, j, row, col, largest_col, exit;

	freopen("test.txt", "r", stdin);

	row = col = largest_col = 0;	
	for(i = 0; i < 100; i++)
		for(j = 0; j < 100; j++)
			sentence[i][j] = ' ';

	while(1)
	{
		exit = scanf("%c", &ch);
		if(ch != '\n' && exit != EOF) 
		{
			if (ch != '\t') 
			{
				sentence[row][col] = ch;
				col++;
			}
		}
		else
		{
			if(largest_col < col) largest_col = col;
			col = 0;
			row++;
		}
		if(exit == EOF) break;
	}
	
	for(i = 0; i < largest_col; i++)
	{
		for(j = row - 1; j >= 0; j--)
			printf("%c", sentence[j][i]);
		printf("\n");
	}

	return 0;
}


