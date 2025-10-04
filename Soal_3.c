#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char kata[500][100];
    char input[100];
    int count = 0;

    while (scanf("%s", input) != EOF) {
        int sama = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(kata[i], input) == 0) {
                sama = 1;
                break;
            }
        }
        if (!sama) {
            strcpy(kata[count], input);
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%s", kata[i]);
        if (i < count - 1) printf(" ");
    }
    printf("\n");
    return 0;
}
