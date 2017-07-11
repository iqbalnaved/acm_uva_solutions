#include<stdio.h>

struct count
{
	long number;
	long frequency;
};


int main()
{
	count n[10000];
	long num, i, j;
	int exit, found;
	char ch;

	freopen("duplicates.txt", "r", stdin);

	i = 0;
	do {
		found = 0;
		scanf("%ld", &num);
		for(j = 0; j <= i; j++)
			if(n[j].number == num)
			{
				n[j].frequency++;
				found = 1;
				break;
			}
		if(!found)
		{
			n[i].number = num;
			n[i].frequency = 1;
			i++;
		}
		exit = scanf("%c", &ch);
		if(ch == '\n' || exit == -1)
		{
			for(j  = 0; j < i; j++)
				printf("%ld %ld\n", n[j].number, n[j].frequency);
			for(j  = 0; j < i; j++)
			{
				n[j].number = 0;
			    n[j].frequency = 0;
			}
			i = 0;
		}
	} while(exit != -1);

	return 0;
}


