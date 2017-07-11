#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
	double decimal;
	char skewdgt;
	int skew[31];
	int i, j, k, flag;

//	clrscr();
	freopen("g:\\codes\\acm\\575\\skew.txt", "r", stdin);

	for(i = 0; i < 31; i++) skew[i] = 0;

	while(1)
	{
		decimal = i = k = skewdgt = flag = 0;

		while(skewdgt != '\n')
		{
			scanf("%c", &skewdgt);
			if(skewdgt != '\n')
			{
				skew[i] = skewdgt - '0';
				i++;
			}
		}

		for(j = 0; j < i; j++)
		{
			printf("%d", skew[j]);
			if(skew[j] != 0) flag = 1;
		}
		printf("\n");
		if(!flag) break;

		while(i >= 0)
		{
			decimal +=  skew[i] * pow(2, k+1) - 1;
			k++; i--;
		}
		printf("%.0lf\n", decimal);
	}

	return 0;
}