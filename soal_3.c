#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char x[300][70];
    int n = 10;

    for (int i = 0; i <  n; i++) {
        scanf("%s", x[i]);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(x[i], x[j]) == 0) {
                for (int k = j; k < n - 1; k++) {
                    strcpy(x[k], x[k + 1]);
                }
                n--;    
                j--;    
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s ", x[i]);
    }
    printf("\n");

    return 0;
}
