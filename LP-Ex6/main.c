#include <stdio.h>
#include <stdlib.h>

int main(){
    float a[10];
    float somaPos = 0;
    int qntdNeg = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o valor de posicao %d\n", i+1);
        scanf("%f", &a[i]);
        a[i] >= 0 ? somaPos += a[i] : qntdNeg++;
    }

    printf("\nSoma dos valores positivos = %.2f\n", somaPos);
    printf("\nQuantidade de valores negativos = %d\n", qntdNeg);
}
