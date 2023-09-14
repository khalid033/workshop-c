#include <stdio.h>

int main(){
	int a , b , c , d , somme;
	float moyenne;
	printf(" svp entrer quatre nombre :");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	somme = a + b + c + d;
	moyenne = somme / 4 ;
	printf("la somme est : %d \n ", somme);
	printf("la moyenne est : %f",moyenne);
	return 0;
}
