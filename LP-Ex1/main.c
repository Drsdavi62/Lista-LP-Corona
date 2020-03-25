#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5];
    int somaImpar = 0;
    int qntdImpar = 0;
    int somaPar = 0;
    int percent = 0;

    for(int i = 0; i <= 4; i++){
        printf("Digite o valor de posicao %d\n", i+1);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i <= 4; i++){
        if(a[i] % 2 == 0){
            somaPar = somaPar + a[i];
        }else{
            somaImpar = somaImpar + a[i];
            qntdImpar++;
        }
    }

    percent = (qntdImpar * 100) / 5;

    printf("\nSoma dos numeros impares = %d\n", somaImpar);
    printf("\nSoma dos numeros pares = %d\n", somaPar);
    printf("\nSoma de todos os numeros = %d\n", somaPar + somaImpar);
    printf("\n%d%% dos numeros digitados foram impares", percent);

    return 0;
}
