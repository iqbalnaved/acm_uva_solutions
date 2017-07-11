#include<stdio.h>
#include<string.h>

int main()
{
	char s[1000000], t[1000000], check[1000000];
	unsigned long i, j, k, temp;

	freopen("words.txt", "r", stdin);

	while(scanf("%s %s", s, t) != EOF)
	{
		k = temp = 0;
		for(i = 0; i < strlen(s); i++)
			for(j = temp; j < strlen(t); j++)
				if(s[i] == t[j])
				{
					check[k] = t[j];
					k++;
					temp = j + 1;
					break;
				}
		check[i] = '\0';
		if(!strcmp(s, check)) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}



			