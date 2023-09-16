#include <stdio.h>
#include <stdlib.h>

int main(){
	int a ;
	printf("entrer votre nombre :");
	scanf("%d",&a);
	if(a % 2 == 0) {
		printf("%d pair \n ",a );
	} else{
		printf("%d impair ", a);
	}
	return 0;
}
