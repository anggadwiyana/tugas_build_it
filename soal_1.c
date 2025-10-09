#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, max, count = 0;
    float percentage, total_pengeluaran = 0;
    scanf("%d", &n);
    int pengeluaran[n];

    for(int i = 1; i <= n; i++){
        scanf("%d", &pengeluaran[i]);
    }

    max = pengeluaran[1];
    printf("Max : ");
    for(int i = 1; i <= n; i++){
        if(pengeluaran[i] > max){
            max = pengeluaran[i];
        }
    }
    printf("%d \n", max);

    printf("Count : ");
    for(int i = 1; i <= n; i++){
        if(pengeluaran[i] == max){
            count++;
        }
    }
    printf("%d \n", count);
    
    printf("days :");
    for(int i = 1; i <= n; i++){
        if(pengeluaran[i] == max){
            printf(" %d", i);
        }
    }

    printf("\nPercentage : ");
    for(int i = 1; i <= n; i++){
        total_pengeluaran = total_pengeluaran + pengeluaran[i];
    }
    percentage = ((max * count) / total_pengeluaran) * 100 ;
    printf("%.3f%%", percentage);
    
    return 0;
}