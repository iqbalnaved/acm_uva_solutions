#include<stdio.h>
#include<math.h>

int main()
{
	int n, num[3000], count, diff[3000];
	int i, j, max, jolly;

	freopen("j.txt", "r", stdin);

	while(scanf("%d", &n) != EOF)
	{
		for(i = 1; i < 3000; i++) diff[i] = 0;
		count = max = 0;
		
		for(i = 0; i < n; i++)
			scanf("%d", &num[i]);
		
		if(n == 1) printf("Jolly\n");
		else
		{
			for(i = 0; i < n; i++)
				if(max < num[i]) max = num[i];

			for(i = 1; i < max; i++)
				for(j = 0; j < n - 1; j++)
					if(abs(num[j] - num[j+1]) == i) diff[i] = 1;

			for(i = 1; i < max; i++)
				if(diff[i] == 0)
				{
					jolly = 0;
					break;
				}
			
			if(jolly)printf("Jolly\n");
			else printf("Not jolly\n");
		}
	}
	return 0;
}
