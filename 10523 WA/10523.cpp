#include<stdio.h>
#include<math.h>

int main()
{
	int n, a, i; 
	double sum;

	freopen("values.txt", "r", stdin);


	while(scanf("%d %d", &n, &a) != EOF)
	{
		sum = 0;
		for(i = 1; i <= n; i++)
			sum = sum + i * pow(a, i);
		printf("%.0lf\n", sum);
	}

	return 0;
}
