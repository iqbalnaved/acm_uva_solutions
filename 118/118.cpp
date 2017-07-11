#include<stdio.h>

int main()
{
	int max_x, max_y;
	int cur_x, cur_y;
	char cur_dir, move, dummy;
	int lost_x[50];
	int lost_y[50];
	int i, j, lost, exit;

	freopen("robot.txt", "r", stdin);
	
	for(i = 0; i < 50; i++) lost_x[i] = lost_y[i] = 0;
	scanf("%d %d", &max_x, &max_y);

	while(1)
	{
		move = '\0';
		i = j = lost = 0;
		exit = scanf("%d %d %c", &cur_x, &cur_y, &cur_dir);
		scanf("%c", &dummy);
	
		while(move != '\n')
		{
			exit = scanf("%c", &move);
			if(exit == EOF) break;
			
			if(move != 'L' && move != 'R' && move != 'F') continue;
			else if(move == 'R')
			{
				if(cur_dir == 'N') cur_dir = 'E';
				else if(cur_dir == 'E') cur_dir = 'S';
				else if(cur_dir == 'W') cur_dir = 'N';
				else cur_dir = 'W';
			}
			else if(move == 'L')
			{
				if(cur_dir == 'N') cur_dir = 'W';
				else if(cur_dir == 'E') cur_dir = 'N';
				else if(cur_dir == 'W') cur_dir = 'S';
				else cur_dir = 'E';
			}
			else 
			{
				if(cur_dir == 'N')
				{
					if(lost_x[cur_x] != 1 && lost_x[cur_y + 1] != 1) cur_y++;
					if(cur_y > max_y) 
					{
						lost = 1;
						lost_x[cur_x] = 1;
						lost_y[cur_y] = 1;
						break;
					}
				}
				else if(cur_dir == 'E') 
				{
					if(lost_x[cur_x + 1] != 1 && lost_x[cur_y] != 1) cur_x++;
					if(cur_x > max_x) 
					{
						lost = 1;
						lost_x[cur_x] = 1;
						lost_y[cur_y] = 1;
						break;
					}
				}
				else if(cur_dir == 'W') 
				{
					if(lost_x[cur_x - 1] != 1 && lost_x[cur_y] != 1) cur_x--;
					if(cur_x < 0) 
					{
						lost = 1;
						lost_x[cur_x] = 1;
						lost_y[cur_y] = 1;
						break;
					}
				}
				else
				{
					if(lost_x[cur_x] != 1 && lost_x[cur_y - 1] != 1) cur_y--;
					if(cur_y < 0) 
					{
						lost = 1;
						lost_x[cur_x] = 1;
						lost_y[cur_y] = 1;
						break;
					}
				}
			}
		}
		if(exit == EOF) break;
		else printf("%d %d %c ", cur_x, cur_y, cur_dir);
		if(lost) printf("LOST\n");
		else printf("\n");
	}

	return 0;
}