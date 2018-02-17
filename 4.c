#include <stdio.h>
void main() {
    int t,l[10],r[10],temp,count[10],i,sum,a[10],j,flag,k,b;
    scanf("%d",t);
    for (i=0;i<t;i++) {
    	scanf("%d",l[i]);
    	scanf("%d",r[i]);
    	count[i] = 0;
		for(b=l[i];b<=r[i];b++) {
        	temp = b;
        	j = 0;
        	sum = 0;
        	while(temp != 0) {
            	a[j] = (temp % 10);
            	sum += a[j] ^ 2;
            	temp = temp/10;
            	j++;
        	}
        	flag = 0;
        	for(k = 0; k < j; k++ ) {
            	if( sum % a[k] != 0 )
                	flag = 1;
        	}
        	if(flag == 0 )
            	count[i]++;
    	}
    }
    for (i = 0; i < t; i++) 
		printf("%d",count[i]);
}
