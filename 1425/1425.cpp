#include<stdio.h>
#pragma warning(disable:4996)
#include<string.h>
typedef struct
{
	char Word[21];
	int score;
}Eng;

int main(void)
{
	int P, N;
	Eng eng[15];
	char arr[21];
	scanf("%d %d", &P, &N);
	for (int p = 0; p < P; p++)
		scanf("%s %d", eng[p].Word, &eng[p].score);
	for (int n = 0; n < N; n++)
	{
		int sum = 0;

		do
		{
			scanf("%s", arr);
			int len = strlen(arr);
			int sss = 0;
			for (int i = 0; i < len; i++)
			{
				if (arr[i] >= 'a' && arr[i] <= 'z')
					sss = sss;
				else
					sss += 2;
			}

			int ch = 0;
			for (int j = 0; j < P; j++)
			{
				if (strcmp(arr, eng[j].Word) == 0)
				{
					sum += eng[j].score;
					ch = 1;
				}
			}
			if (ch == 0 && strcmp(arr, ".") != 0)
			{
				if(sss == 0)
					sum += len / 2;
				else
					sum -= 2;
			}
		} while (strcmp(arr, ".") != 0);


		if (sum >= 100)
			printf("Perfect!\n");
		else if (sum < 60)
			printf("Fail!\n");
		else
			printf("%d\n", sum);
	}
}
