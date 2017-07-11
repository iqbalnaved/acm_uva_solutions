#include<stdio.h>

int main()
{
	char stack[50000], ch;
	int top;
	
	freopen("test.txt", "r", stdin);

	top = -1;

	while(1)
	{
		ch = getchar();
		
		if(ch == EOF) break;		
		if(ch != '\n' && ch != EOF)
		{
			if(ch != ' ' && ch != '\t')
			{
				top++;
				stack[top] = ch;
			}
			else 
			{
				while(top >= 0)
				{
					putchar(stack[top]);
					top--;
				}
				putchar(ch);
			}
		}
		else
		{
			while(top >= 0)
			{
				putchar(stack[top]);
				top--;
			}
			putchar(ch);
		}
	}
	return 0;
}
		
			