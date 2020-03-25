#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5];
    int maior = 0;
    int menor = 0;
    int soma = 0;
    float media = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o valor de posicao %d\n", i+1);
        scanf("%d", &a[i]);
        if (i == 0) {
            maior = a[i];
            menor = a[i];
        } else {
            if(a[i] > maior){
                maior = a[i];
            } else if (a[i] < menor){
                menor = a[i];
            }
        }
        soma = soma + a[i];
    }

    media = (float)soma / 5;

    printf("\nMaior valor = %d\n", maior);
    printf("\nMenor valor = %d\n", menor);
    printf("\nMedia de todos os valores = %.2f", media);
}

