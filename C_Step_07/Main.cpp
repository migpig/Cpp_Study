#include <stdio.h>

int main(void)
/*
{
	int iArrayA[5] = { 1, 2, 3, 4, 5 };
	int iArrayB[] = { 1, 2, 3, 4, 5 };
	int iArrayC[5] = { 1, 2 };
	int iArrayD[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		printf_s("%d번-[A : %d] [B : %d] [C : %d] [D : %d]\n\n",
			i, iArrayA[i], iArrayB[i], iArrayC[i], iArrayD[i]);
	}

	return 0;
}
*/

/* 다차원 배열 예제
{
	int iArray[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};

	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			printf_s("%d\t", iArray[i][j]);

			if (j == 2)
			{
				printf_s("\n");
			}
		}
	}
	printf_s("\n");

	return 0;
}
*/

{
	char str1[5] = { 'G', 'o', 'o', 'd', '\0' };
	char str2[8] = { 'M', 'o', 'r', 'n', 'i', 'n', 'g', '!' };
	// ‘\0’ 없음

	char str3[] = "Sunshine!";

	for (int i = 0; i < 5; ++i)
	{
		printf_s("%c", str1[i]);
	}

	printf_s("%s %s\n", str2, str3);
	printf_s("\n");

	return 0;
}