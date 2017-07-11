#include<stdio.h>
#include<math.h>

int main()
{
	unsigned long num, temp, revnum;
	int i, j, p, n, count, digit, cases, hpower;
	int dgtstore[10];

	freopen("revadd.txt", "r", stdin);

	scanf("%d", &cases);
	revnum = 0;
	for(i = 0; i < cases; i++)
	{
		scanf("%lu", &num);
		count = 0;
		while(1)
		{
			temp = num;
			revnum = p = 0;
			for(n = 0; n < 10; n++) dgtstore[n] = 0;
			while(num)
			{
				digit = num % 10;
				num = num / 10;
				dgtstore[p] = digit;
				p++;
			}
			hpower = p - 1;
			for(j = 0; j < p; j++)
			{
				revnum += dgtstore[j] * (unsigned long)pow(10, hpower);
				hpower--;
			}

			if(temp != revnum)
			{
				num = temp + revnum;
				count++;
			}
			else
				break;
		}
		printf("%d %lu\n", count, revnum);
	}
	return 0;
}



