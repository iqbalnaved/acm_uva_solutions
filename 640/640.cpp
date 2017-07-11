#include<stdio.h>

int main()
{
	long num, i, j, k;

	for(i = 1; i <= 100; i++)
	{
		num = i;
		j = i;
		while(j) 
		{
			num += j % 10;
			j = j / 10;
		}
		for(k = i+1; k < num; k++) printf("%ld\n", k);
	}

	return 0;
}



