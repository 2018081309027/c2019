#include<stdio.h>
#include"move.h"

extern struct playerdir
{
	int x;
	int y;
};
extern playerdir player;

//1Ϊǽ,-1Ϊ·,0Ϊplayer,2Ϊ�յ�

int mazearray[21][21] =
{
	{1,1,1,1,1,1,1,1,1,1,-1,1,1,1,1,1,1,1,1,1,1},
	{1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,1,-1,-1,-1,-1,1,-1,1},
	{1,-1,1,1,1,1,1,1,1,1,-1,1,-1,1,1,-1,1,-1,1,-1,1},
	{1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,1,-1,-1,-1,-1,1,-1,1,-1,1},
	{1,-1,1,-1,1,-1,1,-1,1,1,1,1,1,1,1,-1,1,-1,1,-1,1},
	{1,-1,1,-1,1,-1,-1,-1,1,-1,-1,-1,1,-1,-1,-1,1,-1,1,-1,1},
	{1,-1,1,-1,1,1,1,1,1,-1,1,-1,1,1,1,1,1,-1,1,-1,1},
	{1,-1,1,-1,-1,-1,-1,-1,-1,-1,1,-1,1,-1,-1,-1,1,-1,1,-1,1},
	{1,-1,1,1,1,1,1,1,1,1,1,1,1,-1,1,-1,1,-1,1,-1,1},
	{1,-1,-1,-1,1,-1,-1,-1,1,-1,-1,-1,1,-1,1,-1,-1,-1,1,-1,1},
	{1,1,1,-1,1,-1,1,-1,1,-1,2,-1,1,-1,1,1,1,1,1,-1,1},
	{1,-1,-1,-1,1,-1,1,-1,1,-1,-1,-1,1,-1,1,-1,-1,-1,1,-1,1},
	{1,-1,1,1,1,-1,1,-1,1,1,1,-1,1,-1,1,1,1,-1,1,-1,1},
	{1,-1,1,-1,-1,-1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,-1,1,-1,1},
	{1,-1,1,-1,1,1,1,-1,1,-1,1,1,1,1,1,-1,1,1,1,-1,1},
	{1,-1,1,-1,1,-1,1,-1,-1,-1,1,-1,-1,-1,1,-1,1,-1,-1,-1,1},
	{1,-1,1,-1,1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,1,1,1},
	{1,-1,-1,-1,1,-1,-1,-1,-1,-1,-1,-1,1,-1,-1,-1,1,-1,-1,-1,1},
	{1,-1,1,1,1,1,1,1,1,1,1,-1,1,-1,1,1,1,1,1,-1,1},
	{1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,1,-1,-1,-1,-1,-1,-1,-1,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
};

void maze()
{
	mazearray[player.x][player.y] = 0;
	for (int i = 0; i < 21; i++)
	{
		for (int t = 0; t < 21; t++)
		{
			if (mazearray[i][t] == 1)
			{
				printf("��");
			}
			else if (mazearray[i][t] == -1)
			{
				printf("  ");
			}
			else if (mazearray[i][t] == 0)
			{
				printf("��");
			}
			else if (mazearray[i][t] == 2)
			{
				printf("��");
			}
		}
		printf("\n");
	}
}