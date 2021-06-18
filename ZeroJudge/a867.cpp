#include <stdio.h>

int main()
{
	char table[18][32];
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 31; j++)
		{
			if (j == 30)
				getchar();
			else
				scanf("%c", &table[i][j]);
		}
			
	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			
			if (table[i][j] == '*')
				printf("*");
			else
			{
				int mine = 0;
				for (int x = i - 1; x <= i + 1; x++)
				{
					for (int y = j - 1; y <= j + 1; y++)
					{
						if (table[x][y] == '*')
							mine++;
					}
				}
				if (mine > 0)
					printf("%d", mine);
				else
					printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}
