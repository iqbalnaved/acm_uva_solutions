#include<stdio.h>

int main()
{
	int grid[8][8], i, j, correct, n, numOfCases;

	freopen("cube.txt", "r", stdin);

	scanf("%d", &numOfCases);

	for(n = 0; n < numOfCases; n++)
	{
		for(i = 0; i < 8; i++ )
			for(j = 0; j < 8; j++)
				grid[i][j] = 0;

		for(i = 1; i <= 6; i++ )
			for(j = 1; j <= 6; j++)
				scanf("%d", &grid[i][j]);
		correct = 0;
		for(i = 1; i <= 6; i++ )
			for(j = 1; j <= 6; j++)
			{
				if(grid[i][j] == 1 && grid[i][j+1] == 1 && grid[i][j-1] == 1 && 
				grid[i-1][j] == 1 && grid[i+1][j] == 1 && grid[i-1][j-1] == 0 &&
				grid[i-1][j+1] == 0 && grid[i+1][j-1] == 0 && grid[i+1][j+1] == 0)
				{
					if(grid[i+2][j] == 1 && grid[i+1][j-1] == 0 && grid[i+1][j+1] == 0 && 
					   grid[i+2][j-1] == 0 && grid[i+2][j+1] == 0 && grid[i+3][j] == 0)
						correct = 1;				
					else if(grid[i-2][j] == 1 && grid[i-1][j-1] == 0 && grid[i-1][j+1] == 0 && 
						   grid[i-2][j-1] == 0 && grid[i-2][j+1] == 0 && grid[i-3][j] == 0)
						correct = 1;
					else if(grid[i][j+2] == 1 && grid[i-1][j+1] == 0 && grid[i-1][j+2] == 0 && 
						   grid[i+1][j+1] == 0 && grid[i+1][j+2] == 0 && grid[i][j+3] == 0)
						correct = 1;
					else if(grid[i][j-2] == 1 && grid[i-1][j-1] == 0 && grid[i-1][j-2] == 0 && 
						    grid[i+1][j-1] == 0 && grid[i+1][j-2] == 0 && grid[i][j-3] == 0)
						correct = 1;
				}
				else if()
				{

				}
				else if()
				{

				}
			}
		if(correct) printf("correct\n\n");
		else printf("incorrect\n\n");
	}
	return 0;
}
				  
	


