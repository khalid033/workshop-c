#include <stdio.h>

int main() {
    int nombre;

    printf("give me the number : ");
    scanf("%d", &nombre);

    if (nombre < 0) {
        printf(" n�gatif.\n");
    } else if (nombre > 0) {
        printf(" positif.\n");
    } else {
        printf(" nul.\n");
    }

    return 0;
}
