#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);

    int X[N];
    long long total = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
        total += X[i];
    }

    int max = X[0];
    for (int i = 1; i < N; i++) {
        if (X[i] > max) {
            max = X[i];
        }
    }

    int count = 0;
    int days[N];
    for (int i = 0; i < N; i++) {
        if (X[i] == max) {
            days[count] = i + 1;
            count++;
        }
    }

    double percentage = (double)(max * count) / total * 100.0;

    printf("Max : %d\n", max);
    printf("Count : %d\n", count);
    printf("days : ");
    for (int i = 0; i < count; i++) {
        printf("%d", days[i]);
        if (i < count - 1) printf(" ");
    }
    printf ("\n");
    printf("Percentage : %.3f%%\n", percentage);
    
    return 0;
}
