#include<stdio.h>
#include<math.h>

int main()
{
	double x1, y1, x2, y2, x3, y3;
	double dist1, dist2, dist3, circumference;


	freopen("test.txt", "r", stdin);		

	while(scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3)!= EOF)
	{
/*		
		dist1 = sqrt( pow(x1 - x2, 2) + pow(y1 - y2, 2));
		dist2 = sqrt( pow(x2 - x3, 2) + pow(y2 - y3, 2));
		dist3 = sqrt( pow(x3 - x1, 2) + pow(y3 - y1, 2));

		if(dist1 > dist2)
		{
			 if(dist1 > dist3)
				circumference = 2 * acos(0.0) * dist1;
			 else
				circumference = 2 * acos(0.0) * dist3;
		}
		else 
		{
			if(dist2 > dist3)
				circumference = 2 * acos(0.0) * dist2;
			else
				circumference = 2 * acos(0.0) * dist3;
		}
		printf("%.2lf\n", circumference);
*/

	}
	return 0;
}

 