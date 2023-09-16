#include <stdio.h>
#include <stdlib.h>
int main(){

int a , b , somme ;
printf("entrer la valeur a :");
scanf("%d",&a);
printf("entrer la valeur b :");
scanf("%d",&b);
if(a==b){
	somme = (a+b)*3;
	printf("la somme est : %d",somme);
}else{
	somme = a+b;
	printf("la somme est : %d",somme);
}
}
