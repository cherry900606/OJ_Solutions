#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0, len = 0;
	char sentence[100][100];
	while (gets(sentence[i]) != NULL)
	{
		if (strlen(sentence[i]) > len)
			len = strlen(sentence[i]);
		i++;
	}
	for (int j = 0; j < len; j++)
	{
		for (int k = i - 1; k >= 0; k--)
		{
			if (j < strlen(sentence[k]))
				printf("%c", sentence[k][j]);
			else
				printf(" ");
		}

		printf("\n");
	}
	return 0;
}
