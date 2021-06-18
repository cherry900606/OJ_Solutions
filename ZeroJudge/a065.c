#include<stdio.h>
#include<string.h>

int main()
{
	char name[7];
	while (scanf("%s", name, sizeof(name))!= EOF)
	{
		int temp;

		for (int i = 1; i < 7; i++)
		{
			if (name[i] > name[i - 1])
				temp = name[i] - name[i - 1];
			else
				temp = name[i - 1] - name[i];
			printf("%d", temp);
		}
		printf("\n");
	}
	return 0;
}
