#include<stdio.h>
#include<math.h>

int main()
{
	long a, b, sum, rev_a, rev_b, rev_sum; 
	int cases, digit, i, p;

	freopen("g:\\codes\\acm\\713\\rev.txt", "r", stdin);

	scanf("%d", &cases);
	for(i = 0; i < cases; i++)
	{
		scanf("%ld %ld", &a, &b);
		rev_a = rev_b = rev_sum = p = 0;
		if(a > 9)
		{
			while(a)
			{
				digit = a % 10;
				a = a / 10;
				rev_a += digit * (long)pow(10, p);//how to reverse?
				p++;
			}
		}
		else
			rev_a = a;
		p = 0;
		if(b > 9)
		{
			while(b)
			{
				digit = b % 10;
				b = b / 10;
				rev_b += digit * (long)pow(10, p);
				p++;
			}
		}
		else
			rev_b = b;
		
		sum = rev_a + rev_b;

		p = 0;
		while(sum)
		{
			digit = sum % 10;
			sum = sum / 10;
			rev_sum += digit * (long)pow(10, i);
		}
		printf("%ld\n", rev_sum);
	}

	return 0;
}



