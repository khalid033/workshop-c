#include <stdio.h>
int main() {
	int a;
	
	printf("saissez votre nemuro");
	scanf("%d", &a);
	
	printf("( %d )10 = ( %o )8 \n", a, a) ;
	printf("( %d )10 = ( %x )16 ", a, a) ;
	return 0;
}

