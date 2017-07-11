#include<stdio.h>
#include<math.h>

int main()
{
	int n;

	freopen("heads.txt", "r", stdin);

	while(scanf("%d", &n) != EOF)
		printf("2^-%d = %.3E\n", n, pow(2, -n));

	return 0;
}
