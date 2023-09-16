#include <stdio.h>
int main(){
	char voyelle ;
	printf("entrer un voyelle :");
	scanf("%c",&voyelle);
	
	switch (voyelle) {
  case 'a':
    printf("voyelle");
    break;
  case 'e':
    printf("voyelle");
    break;
  case 'i':
    printf("voyelle");
    break;
  case 'o':
    printf("voyelle");
    break;
  case 'u':
    printf("voyelle");
    break;
  case 'y':
    printf("voyelle");
    break;
    default:
    printf("pas voyelle.\n");
}
}
