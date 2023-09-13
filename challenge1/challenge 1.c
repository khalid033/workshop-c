#include<stdio.h>
int main(){
	int age;
	char nom[15], prenom[15], sexe[10] ,Tele[15];
	
	printf("Donner respectivement votre nom, prenom, age sexe et Telephone");
	scanf("%s %s %d %s %s", &nom, &prenom, &age, &sexe , &Tele);
	
	printf("-------------------------------------------------\n");
	printf("votre nom est : %s \n   prenom : %s \n   age : %d \n sexe : %s \n  Tele : %s" , nom , prenom , age , sexe , Tele );
	return 0;
}
