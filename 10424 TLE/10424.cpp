#include<stdio.h>

char lowercase(char);

int main()
{
	int first_name, second_name, first_value, second_value, exit;
	char ch;

	freopen("love.txt", "r", stdin);
	
	while(1)
	{
		first_name = second_name = first_value = second_value = exit = 0;

		while((ch = getchar()) != '\n')
		{
			if(ch >= 'a' && ch <= 'z')
				first_name += ch - 'a' + 1;
			else if(ch >= 'A' && ch <= 'Z')  
				first_name += lowercase(ch) - 'a' + 1;
		}

		ch = '\0';
		while((ch = getchar()) != '\n')
		{
			if(ch == EOF)
			{
				exit = 1;
				break;
			}

			if(ch >= 'a' && ch <= 'z')
				second_name += ch - 'a' + 1;
			else if(ch >= 'A' && ch <= 'Z')  
				second_name += lowercase(ch) - 'a' + 1;
		}
		
		do 
		{
			first_value = 0;
			while(first_name)
			{
				first_value += first_name % 10;
				first_name /= 10;
			}
			first_name = first_value;
		} while(first_value > 9);

		do 
		{
			second_value = 0;
			while(second_name)
			{
				second_value += second_name % 10;
				second_name /= 10;
			}
			second_name = second_value;
		} while(second_value > 9);


		if(first_value == 0 || second_value == 0)
			printf("0.00 %%\n");
		else if(first_value < second_value)
			printf("%.2f %%\n", (float)first_value / second_value * 100);
		else
			printf("%.2f %%\n", (float)second_value / first_value * 100);

		if(exit) break;
	}
	return 0;
}

char lowercase(char ch)
{
	return ch + 32;
}