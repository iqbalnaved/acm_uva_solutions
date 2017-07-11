#include<stdio.h>

int main()
{
	int bool_matrix[99][99];
	int i, j;
	bool is_parity, is_corrupt;

	freopen("test.in", "r", stdin);

	while(scanf("%d", &n) != EOF)
	{
		if(n == 0) break;

		parity  = true;
		corrupt = false;
		count = odd_count = 0;
		
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				scanf("%d", &bool_matrix[i][j]);
		
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
				if(bool_matrix[i][j] == 1) count++;
			if(count % 2)
			{
				odd_count++;
				parity = false;
				if(odd_count > 1)
				{
					corrupt = true;
					break;
				}
			}
		}

		count = odd_count = 0;
		if(parity && !corrupt)
		{
			for(i = 0; i < n; i++)
			{
				for(j = 0; j < n; j++)
					if(bool_matrix[j][i] == 1) count++;
				if(count % 2)
				{
					odd_count++;
					parity = false;
					if(odd_count > 1)
					{
						corrupt = true;
						break;
					}
				}
			}
		}
		else if(!parity && !corrupt)
		{
			for(i = 0; i < n; i++)
			{
				for(j = 0; j < n; j++)
					if(bool_matrix[j][i] == 1) count++;
				if(count % 2)
				{
					odd_count++;
					parity = false;
					if(odd_count > 1)
					{
						corrupt = true;
						break;
					}
				}
			}
		}



	}
	return 0;
}
