#include<stdio.h>
#include<math.h>
int main()
{
	char x[250], y[250], mul[500], ch;
	int i = 0, temp = 0, j, k, l, m;
	
	freopen("mul.txt", "r", stdin);

	while(scanf("%c", &ch) != EOF)
	{
		while(ch != '\n') 
		{
			x[i] = ch - '0';
			i++;
			
		}
		j = 0;
		while(ch != '\n')
		{
			y[j] = ch - '0';
			j++;
		}
		for(k = j; k >= 0; k--)
			for(l = i, m = 0; l >= 0; l--, m++)
			{
				temp += x[l] * y[k];
				if(temp > 9)
				{
					mul[k] = temp % 10;
					temp = temp / 10;
				}
			}

	}
	return 0;
}