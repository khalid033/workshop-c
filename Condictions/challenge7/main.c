#include <stdio.h>

int main() {
    char c;

    printf("donner un caractere : ");
    scanf(" %c", &c); 
   
    if (c >= 'A' && c <= 'Z') {
        printf("%c majuscule.\n", c);
    } else {
        printf("%c minuscule.\n", c);
    }

    return 0;
}
