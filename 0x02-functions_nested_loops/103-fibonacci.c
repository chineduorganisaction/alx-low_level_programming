#include <stdio.h>
/**
 * main - main entry point                   * Return: print integer                     **/

int main(void)
{
	long int n1 = 0, n2 = 1,
	     nextvar = 0, i, sum2 = 0;

        nextvar = n1 + n2;
        for (i = 1; i < 50; i++)
        {
                if (nextvar < 4000000)
		{
			n1 = nextvar;
			nextvar = (n2 + n1);
			n2 = n1;
			if ((nextvar % 2) == 0)
			{
				sum2 = (sum2 + nextvar);
				printf("%ld", sum2);
			}
		}
	}
	printf("\n");
	return (0);
}
