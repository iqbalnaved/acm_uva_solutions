#include<stdio.h>

int main()
{
	unsigned long number, termcount;

	number = 1; termcount = 1;
	while(termcount <= 1500)
	{
		if(number % 2 == 0) while(number % 2 == 0); 
		else if(number % 3 == 0) termcount++;
		else if(number % 5 == 0) termcount++;
		number++;
	}
	printf("%lu", number);
	return 0;
}