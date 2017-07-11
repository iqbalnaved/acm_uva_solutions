#include<stdio.h>

int main()
{
	int numOfCoaches;
	int requiredOrder[1000], resultOrder[1000];

	freopen("rails.txt", "r", stdin);

	while(1)
	{
		scanf("%d", &numOfCoaches);
		if(numOfCoaches == 0) break;
		scanf("%d", &requiredOrder[0]);
		if(requiredOrder[0] == 0) break;
		for(i = 1; i < numOfCoaches; i++)
			scanf("%d", &requiredOrder[i]);
		scanf("%d", &endBlock);




