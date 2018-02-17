#include<stdio.h>
float convert(float temp) {
	float a;
	a = temp;
	return (( 5.0 / 9.0 ) * ( a - 32.0 ));
}
void main() {
	float x;
	printf("Enter the number to be converted from Fahr to Cel : ");
	scanf("%5.2f",x);
	printf("x is %5.2f",x);
	printf("%5.2f",convert(x));
}

