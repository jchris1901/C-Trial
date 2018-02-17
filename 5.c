#include <stdio.h>
void main() {
    int t,l[10],r[10],i;
    scanf("%d",t);
    for (i=0;i<t;i++) {
    	scanf("%d",l[i]);
    	scanf("%d",r[i]);
    }
    for (i=0;i<t;i++) {
    	printf("%d",l[i]);
    	printf("%d",r[i]);
    }
}
