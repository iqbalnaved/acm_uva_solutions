#include<stdio.h>
#include<math.h>

int main()
{
	int radius, sides;
	double area;

	freopen("polygon.txt", "r", stdin);

	while(scanf("%d %d", &radius, &sides) != EOF)
	{
		/* area of a polygon inside a circle = n*r^2*tan(pi/n) */
		area = sides * pow(radius, 2) * tan(2 * acos(0) / sides); /* pi = 2 * acos(0);*/
		printf("%.3lf\n", area);
	}

	return 0;
}