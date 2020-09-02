#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= cols; i++)
	{
		printf("%d ", i);   //打印行号
	}
	printf("\n");
	for (i = 1; i <= rows; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= cols; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;  //1~9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//‘3’-‘0’=3
int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1] +
		board[x][y - 1] + board[x][y + 1] + board[x + 1][y - 1] +
		board[x + 1][y] + board[x + 1][y + 1] - 8 * '0';
}

void FindMine(char board[ROWS][COLS], char board2[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col - EASY_COUNT)
	{
		printf("请输入你要排查的坐标：\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			//坐标合法
			if (board[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(board, row, col);
				break;
			}
			else   //不是雷
			{
				//计算雷的个数
				int count = get_mine_count(board, x, y);
				board2[x][y] = count + '0';
				DisplayBoard(board2, row, col);
				win++;
			}
		}
		else
		{
			printf("输入非法，请重新输入\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("排雷成功\n");
		DisplayBoard(board, row,col);
	}
}
