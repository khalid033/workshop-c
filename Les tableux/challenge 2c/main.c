#include<stdio.h>
#include<stdlib.h>

int main(){
	int T[10];
	int i, min , max;
	
	for (i=0 ;i<10;i++){
		printf("T[%d]",i);
		scanf("%d",& T[i]);
		
	} 
		max = T[0];
		for (i=0 ;i<10;i++){
		if (T[i]>max)
		max = T[i];
	}
	min = T[0];
	for (i=0 ;i<10;i++){
		if (T[i]<min);
		min = T[i];
	}
	printf("min est : %d \n", min);
	printf("max est : %d ", max);
	return 0;
}
