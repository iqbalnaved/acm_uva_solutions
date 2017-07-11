#include<stdio.h>

int main()
{
	char ch;
	int syllable[3], last, exit, i;

	freopen("haiku.txt", "r", stdin);

	last = i = 0;
	syllable[0] = syllable[1] = syllable[2] = 0;
	while((exit = scanf("%c", &ch)) != EOF)
	{
		if(ch != '\n' && ch != '\\' && exit != EOF)
		{
			if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||  ch == 'u' || ch == 'y')
				if(!last)
				{
					syllable[i]++;
					last = 1;
				}
			else last = 0;
		}
		else if(ch == '/') i++;
		else if(ch == '\n')
		{
			if(syllable[0] == 5 && syllable[1] == 7 && syllable[2] == 5)
				printf("Y\n");
			else if(syllable[0] != 5) printf("1\n");
			else if(syllable[1] != 7) printf("2\n");
			else if(syllable[2] != 5) printf("3\n");
		}
		else if(exit == -1) break;
	}
	return 0;
}


