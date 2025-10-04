#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int tinggi;
    int baris = 1;
    scanf("%i", &tinggi);

    while (baris < tinggi) {

        for (int i = 0; i < tinggi - baris - 1; i++) {
            printf(" ");
        }
        for (int i = 0; i < 2 * baris - 1; i++) {
            printf("*");
        }
        printf("\n");
        baris++;
    }

    for (int i = 0; i < tinggi - 2; i++) {
        printf(" ");
    }
    printf("*\n");

    return 0;
}