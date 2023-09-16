#include<stdio.h>
#include<stdlib.h>

int main(){
    int m;
    printf("svp entrer votre moyenne : ");
    scanf("%d",&m);
     if (m < 10 ) {
        printf("recalé");
} else if (m>=10 && m<=12){
    printf("passable");
} else if (m>=12 && m<= 14){
    printf(" assez bien");
} else if(m>=14 && m<= 16)  {
    printf("bien");
} else  
	printf("tres bien");
return 0;	
}
