#include<stdio.h>
void main()
{
	float fahr = 0.0, cel;
	while (fahr <= 260.0)
	{
		cel = 5.0 * (fahr - 32.0) / 9.0;
		printf("%3.2f \t %3.2f \n",fahr,cel);
		fahr += 20.0;
	}
}
