//try long long
#include<stdio.h>


int main()
{
	long long a, temp, limit, cycle, cases;

	freopen("ctest.txt", "r", stdin);

	cases = 0;
	while(scanf("%ll %ll", &a, &limit) != EOF)
	{
		cycle = 0;
		cases++;
		temp = a;
		if(a == -1 && limit == -1) break;
		while(a != 1 && a <= limit)
		{
			if(a % 2)
			{
				a = 3 * a + 1;
				if(a <= limit) cycle++;
				if(a < 0) break;
			}
			else
			{
				a = a / 2;
				if(a <= limit) cycle++;
			}
		}
		printf("Case %ld: A = %ll, limit = %ll, number of terms =  %ll\n", cases, temp, limit, cycle+1);
	}

	return 0;
}

