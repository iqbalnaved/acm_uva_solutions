#include<stdlib.h>

struct Position {
	int row;
	int col;
};

struct Node {
	Position data;
	Node *link;
};

char Maze[10][10];
int Row, Col;
Node *top = NULL; //Empty Stack

int FindPath();
void Add(Position);
Position Delete();


int FindPath()
{
	Position offset[4];

	offset[0].row = 0;
	offset[0].col = 1;

	offset[1].row = 1;
	offset[1].col = 0;

	offset[2].row = 0;
	offset[2].col = -1;

	offset[3].row = -1;
	offset[3].col = 0;

	for(int i = 0; i <= Col+1; i++)
	{
		Maze[0][i] = 'X';
		Maze[Row+1][i] = 'X';
	}
	for( i = 0; i <= Row+1; i++)
	{
		Maze[i][0] = 'X';
		Maze[i][Col+1] = 'X';
	}

	Position here;
	int option;
	int LastOption;
	int flag = 0;

	// check the last column.
	for( i = 1; i <= Col; i++)
		if(Maze[i][Col] == 1)
		{
			 flag = 1;
			 break;
		}
	if(!flag) return 0;
Next:
	for( i = 1; i <= Row; i++)
	{
		if(Maze[i][1] == 1)
		{
			here.row = i;
			here.col = 1;

			Maze[i][1] = 0;
			option = 0;
			LastOption = 3;

			while( here.col != Col)
			{
				int r, c;

				while(option <= LastOption)
				{	// find a neighbor to move to
					r = here.row + offset[option].row;
					c = here.col + offset[option].col;
					if(Maze[r][c] == 1) break;
					option++;
				}
				// was a neighbor found?
				if(option <= LastOption)
				{
					Add(here);
					here.row = r;
					here.col = c;// go to the neighbor
					Maze[r][c] = 0; // Block Position.
					option = 0;
				}
				else
				{// no neighbor to move to, back up
					if((top == NULL) && (i == Row))
						return 0; //No Path
					if((top == NULL) && (i < Row))
						goto Next;
					Position next;
					next = Delete();
					if(next.row == here.row)
						option = 2 + next.col - here.col;
					else
						option = 3 + next.row - here.row;
					here = next;
				}
			}
			Add(here);
			return 1; // path found
		}
	}
	return 0;
}


void Add(Position here)
{
	Node *p;
	p = (Node *)malloc(sizeof(Node));
	p->data = here;
	p->link = top;
	top = p;
}

Position Delete()
{
	Position back;
	Node *p;
	if(top == NULL)
	{
		cout << "Stack Empty" << endl;
		exit(1);
	}
	back = top -> data;
	p = top;
	top = top -> link;
	free(p);
	return back;
}








