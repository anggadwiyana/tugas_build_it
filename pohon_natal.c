#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n-1; i++){
        for(int j = i + 2; j < n; j++){
            printf(" ");
        }
        
        for(int j = n - (i * 2) - 1; j < n; j++){
            printf("*");

        }
        printf("\n");
    }

    for(int i = 0; i < 1; i++){
        for(int j = i + 2; j < n; j++){
            printf(" ");
        }
        
        for(int j = n - (i * 2) - 1; j < n; j++){
            printf("*");

        }
        printf("\n");
    }
    return 0;
}