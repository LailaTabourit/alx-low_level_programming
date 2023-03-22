#include <stdio.h>
/**
* main - the 50 of fibo
*
* Return: void return nothing
*/
int main(void)
{
	unsigned long count, i, j, k, sum;

	i = sum = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sum += k;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
