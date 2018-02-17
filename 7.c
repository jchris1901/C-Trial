#include<stdio.h>
void main() {
	int c,blanks,tabs,newlines;
	blanks = tabs = newlines = 0;
	while ( ( c = getchar()) != EOF ) {
		if(c == ' ')
			blanks++;
		else if ( c == '\t')
			tabs++;
		else if ( c == '\n')
			newlines++;
	}
	printf ("Number of Blanks: %d \n", blanks);
	printf ("Number of Tabs: %d \n",tabs);
	printf ("Number of New Lines: %d \n",newlines);
}
