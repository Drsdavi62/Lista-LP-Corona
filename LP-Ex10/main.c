#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[4][2];
    int b[4][2];
    int c[4][2];

    printf("Digite 8 valores para a matriz A\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Digite 8 valores para a matriz B\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &b[i][j]);
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Matriz A\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("Matriz C = Soma A e B\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

}
