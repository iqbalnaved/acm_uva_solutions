#include<stdio.h>


int main()
{
	int numOfWords, wordLength, *order, count;
	int i, j, k, l;
	char *word;
	

	freopen("morph.txt", "r", stdin);

	while(scanf("%d %d", &numOfWords, wordLength) != EOF)
	{
		word = new char[numOfWords * wordLength];
		order = new int[numOfWords];
		for(i = 0; i < numOfWords; i++)
			scanf("%s", word[i]);
		j = 2; k = 0; l = 0; count = 0; 
		while(j < numOfWords)
		{
			while(word[j][k] != '\0')
			{
				if(word[0][k] != word[j][k]) count++; 
				k++;
			}
			if(count <= 1) order[l] = j;
			else j++;
		}
		for(i = 0; i < numOfWords; i++)
			printf("%s\n", word[order[i]])
	}
	return 0;
}




