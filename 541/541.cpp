#include<stdio.h>

int main()
{
	int i, j, n, row1, row2, col1, col2, count; 
	int odd_row1, odd_col1, odd_row2, odd_col2, odd_parity_count;

	bool parity;
	int matrix[99][99];

	freopen("p.in", "r", stdin);

	while(scanf("%d", &n) != EOF)
	{
		if(n == 0) break;
		
		count = odd_parity_count = 0;
		parity = true;
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				scanf("%d", &matrix[i][j]);

		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
				if(matrix[i][j] == 1)
				{
					count++;
					row1 = i;
					col1 = j;
				}
			if(count % 2) 
			{
				parity = false;
				if(odd_parity_count++ > 1) break;
				odd_row1 = row1;
				odd_col1 = col1;
			}
			count = 0;
		}
		
		if(odd_parity_count <= 1)
		{
			count = odd_parity_count = 0;
			for(i = 0; i < n; i++)
			{
				for(j = 0; j < n; j++)
					if(matrix[j][i] == 1)
					{
						count++;
						row2 = j;
						col2 = i;
					}
				if(count % 2)
				{
					parity = false;
					odd_parity_count++;
					odd_row2 = row2;
					odd_col2 = col2;
				}
				count = 0;
			}
		}	
		if(parity) printf("OK\n");
		else if(odd_parity_count == 1 && (odd_row1 == odd_row2 || odd_col1 == odd_col2)) 
			printf("Change bit (%d,%d)\n", odd_row1+1, odd_col1+1);
		else printf("Corrupt\n");
	}

	return 0;
}



		