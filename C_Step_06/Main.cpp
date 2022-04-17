#include<stdio.h>

int main(void)
/*
{
	int i = 0;

	while (i < 10)
	{
		printf("Hello World! %d\n", i);
		i++;
	}

}
*/
/*
{
	int iFahrenheit, iCelsiuts = 0;
	int iLower, iUpper, iStep;

	iLower = 0;
	iUpper = 300;
	iStep = 20;

	iFahrenheit = iLower;

	while (iFahrenheit <= iUpper)
	{
		iCelsiuts = 5 * (iFahrenheit - 32) / 9;
		printf_s("È­¾¾ : %d\t¼·¾¾ : %d\n", iFahrenheit, iCelsiuts);
		iFahrenheit += iStep;
	}

	printf_s("\n");
	return 0;
}
*/
/*
{
	float fPrice = 24;
	int iYear;

	for (iYear = 1627; iYear < 2022; iYear++)
	{
		fPrice *= 1.08;
	}

	printf_s("1627 : $ 24 -> 2022 : $ %0.2f\n", fPrice);

	return 0;
}
*/

{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - i; j++)
		{
			printf_s(" ");
		}

		for (int j = 0; j < i + 1; j++)
		{
			printf_s("*");
		}
		printf_s("\n");
	}

	return 0;
}
