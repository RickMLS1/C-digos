#include <stdio.h>

int calculo(int n, int i, double c, double par, double div_par, double div_impar, double impar)
{
	if(n>i)
	{
		if(i % 2 == 0)
		{
			c+= (3 +(2*par))/(div_par);
			return calculo(n, i+1, c, par+1, div_par*4, div_impar, impar);
		}
		else
		{
			c+= (div_impar)/((3*impar));
			return calculo(n, i+1, c, par, div_par, div_impar*4, impar+1);

		}
	}
	else
	{
		printf("S: %.2lf\n", c);
		return 0;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	calculo(n, 1, 1, 0, 4, 2, 1);

	return 0;
}
