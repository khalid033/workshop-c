#include <stdio.h>
#include <stdlib.h>

int main() {
    int tableau[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
    for ( i = 0; i < 10; i++) {
        printf("%d", tableau[i]);
        if (i < 9) {
            printf(", ");
        }
    }


    return 0;
}

