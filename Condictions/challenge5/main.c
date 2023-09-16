#include <stdio.h>

int main(){
	int SH, annee , Mois , Jours , Heures , Minutes , Secondes  ;
	printf("entrer l annee SVP : \n");
	scanf("%d",&annee);
	
	printf("1. pour mois : \n");
	printf("2. pour jours : \n");
	printf("3. pour heures : \n");
	printf("4. pour minutes : \n");
	printf("5. pour secondes : \n");
	printf("choisir un nombre");
	scanf("%d",&SH);
	
	switch(SH){
	
	case 1 : Mois = annee*12;
	         printf("%d", Mois);
	         break;
	case 2 : Jours = annee*365;
	       printf("%d",Jours);
	       break;
	case 3 : Heures = annee*365*24;  
	         printf("%d",Heures);
	         break;
	case 4 : Minutes = annee*365*24*60;
	       printf("%d",Minutes);
		   break;
    case 5 :Secondes = annee * 365*24*60 * 60 ;
			printf("%d",Secondes) ;   
			break;     
		}
}
