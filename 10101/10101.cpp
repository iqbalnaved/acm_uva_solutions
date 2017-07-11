#include<stdio.h>

int main()
{
	char num[15], ch ='\0';
	int i, j, count, serial;

	freopen("bangla.txt", "r", stdin);

	serial = 1;
	while(1)
	{
		i = 0;
		while(ch != '\n')
		{
			scanf("%c", &ch);
			if(ch != '\n') num[i] = ch - '0';
			i++;
		}
		
		printf("%d.", serial);
		count = i;
		for(j = i; j > 0; j--, count--)
		{
			printf("%d", num[j]);
			if(count == 2) printf("shata");
			if(count == 3) printf("hajar");
			if(count == 5) printf("lakh");
			if(count == 9) 
			{
				printf("kuti");
				count = i;
			}
		}
		printf("\n");
		serial++;
	}

	return 0;
}
