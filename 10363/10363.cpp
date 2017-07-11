#include<stdio.h>

int main()
{
	char grid[3][3], ch;
	int i, j, k, cases, x_count, o_count;

	freopen("tictac.txt", "r", stdin);

	scanf("%d", &cases);
	for(i = 0; i < cases; i++)
	{
		for(j = 0; j < 3; j++)
			for(k = 0; k < 3; k++)
			{
				scanf("%c", &ch);
				if(ch == 'X' || ch == 'O' || ch == '.') grid[j][k] = ch;
				if(ch == '\n') k--;
			}

		x_count = o_count = 0;
		for(j = 0; j < 3; j++)
			for(k = 0; k < 3; k++)
			{
				if(grid[j][k] == 'X') x_count++;
				if(grid[j][k] == 'O') o_count++;
			}
		
		// IF DRAW
		if(o_count + 1 == x_count || o_count == x_count) printf("yes\n");//X
		else printf("no\n");
	}
	return 0;
}
