#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int  bingo[5][5] = {0}, row[5] = { 0 }, column[5] = { 0 }, tilt[2] = { 1,1 },input[75],check=0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (i == 2 && j == 2)
					continue;
				else
					scanf("%d", &bingo[i][j]);
			}
		}
		row[2] = 1, column[2] = 1;
		for (int i = 0; i < 75; i++)
			scanf("%d", &input[i]);
		for (int i = 0; i < 75; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				for (int k = 0; k < 5; k++)
				{
					if (input[i] == bingo[j][k])
					{
						row[j]++;
						column[k]++;
						if (j == k)
							tilt[0]++;
						else if (j + k == 4)
							tilt[1]++;
					}
				}
			}
			if (tilt[0] == 5 || tilt[1] == 5)
			{
				printf("BINGO after %d numbers announced\n", i + 1);
				check = 1;
				break;
			}
			else
			{
				for (int j = 0; j < 5; j++)
				{
					if (row[j] == 5 || column[j] == 5)
					{
						printf("BINGO after %d numbers announced\n", i + 1);
						check = 1;
						break;
					}
				}
			}
			if (check == 1)
				break;
		}
	}
	return 0;
}
