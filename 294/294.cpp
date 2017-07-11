#include<stdio.h>

int main()
{
	int n, i;
	long l_range, u_range, max_num, max_divisor, divisor, j, k;

	freopen("divisor.txt", "r", stdin);

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%ld %ld", &l_range, &u_range);

		max_divisor = max_num = 0;
		
		for(j = l_range; j <= u_range; j++)
		{
			divisor = 0;
			for(k = 1; k <= j; k++)
			{
				if(j % k == 0) divisor++;
				if(max_divisor < divisor)
				{
					max_divisor = divisor;
					max_num = j;
				}
			}
		}
		
		printf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n", l_range, u_range,
				max_num, max_divisor);
	}
	return 0;
}
			

