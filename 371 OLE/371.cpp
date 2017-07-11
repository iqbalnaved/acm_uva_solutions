#include<stdio.h>

int main()
{
	long long i, j, cycle, maxcycle, temp, max;

	freopen("ack.txt", "r", stdin);

	while(scanf("%ll %ll", &i, &j) != EOF)
	{
		if(i == 0 && j == 0) break;
		printf("Between %ll and %ll , ", i, j);

		maxcycle = 0;
		
		for(temp = i; i <= j; i = ++temp)
		{
			cycle = 0;
			while(i != 1)
			{
				if(i % 2)
				{
					i = 3 * i + 1;
					cycle++;
				}
				else
				{
					i = i / 2;
					cycle++;
				}
			}
			if(maxcycle < cycle)
			{
				maxcycle = cycle;
				max = temp;
			}
		}
		printf("%ll generates the longest sequence of %ll values.\n", max, maxcycle);
	}
	return 0;
}

