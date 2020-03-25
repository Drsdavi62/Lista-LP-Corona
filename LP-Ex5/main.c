#include <stdio.h>
#include <stdlib.h>

int main(){
    float a[15];
    float soma = 0;
    float mediaGeral = 0;

    for(int i = 0; i < 15; i++){
        printf("Digite a nota do aluno %d\n", i+1);
        scanf("%f", &a[i]);
        soma = soma + a[i];
    }

    mediaGeral = soma/15;

    printf("\nA media geral dos alunos foi de %.2f", mediaGeral);
}
