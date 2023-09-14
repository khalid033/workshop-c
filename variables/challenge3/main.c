#include<stdio.h>
int main(){
	int a, b , sum , less , multiple , devision ;
	printf(" entrer deux nombres svp :");
	scanf("%d %d", &a ,&b);
	sum = a + b ;
	less = a - b;
	multiple = a * b ;
	devision = a / b ;
	
	printf("la som est : %d \n",sum);
	printf("less est : %d \n",less);
	printf("multiple est  : %d \n" ,multiple);
	printf("devision est : %d \n",devision);
	return 0;
	}
