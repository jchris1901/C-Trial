#include<stdio.h>
void main() {
	int c,a[10],i,count = 0,x;
	for ( i = 0; i < 10; i++)
		a[i] = 0;
	while ( ( c = getchar()) != EOF ) {
		if(c == ' ' || c == '\t' || c == '\n') {
			if ( count > 0 ) {
				count  = count - 1;
				a[count]++;
			}
			count = 0;
		}
		else {
			count++;
		}
	}
	for ( i = 0; i < 10; i++) {
		x = i + 1;
		printf("%d \t ", x);
		printf("%.*s",(2 * a[i] ), " # # # # # # # # # #");
		printf(" \n ");
	}
}
