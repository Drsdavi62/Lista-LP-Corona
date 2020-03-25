#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            a[i][j] = i > j ? 0 : 1;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}
