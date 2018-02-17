#include<stdio.h>
void main()
{
	int fahr = 0, cel;
	while (fahr <= 260)
	{
		cel = 5 * (fahr - 32) / 9;
		printf("%3d \t %3d \n",fahr,cel);
		fahr += 20;
	}
}
