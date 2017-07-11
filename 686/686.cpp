#include<stdio.h>
#include<math.h>

//int findpair(double);

int main()
{
/*	double num;

	freopn("numbers.txt", "r", stdin);

	
	while(scanf("%lf", &num) != EOF)
	{
		if(num == 0) break;
		else
		{
			findpair(num);
			if(found)count++;
		}
		printf("%d", count);
	}
	return 0;
}

int findpair(double n)
{*/
	long i;
	long j;
	long prime;
	
	prime = 0;
	for(i = 4; i < pow(2, 15); i++)
	{
		for(j = 2; j <= sqrt(i); j++)
			if(i%j)break;
		if(j > sqrt(i))
			prime++;
	}

	printf("%ld", prime);

	return 0;
}

		
