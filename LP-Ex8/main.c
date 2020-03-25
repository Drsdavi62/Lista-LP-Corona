#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5];
    int indexMaior = 0;
    int indexMenor = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o valor de posicao %d\n", i+1);
        scanf("%d", &a[i]);
        if (i == 0) {
            indexMaior = i;
            indexMenor = i;
        } else {
            if(a[i] > a[indexMaior]){
                indexMaior = i;
            } else if (a[i] < a[indexMenor]){
                indexMenor = i;
            }
        }
    }

    printf("\nPosicao do maior valor = %d\n", indexMaior);
    printf("\nPosicao do menor valor = %d\n", indexMenor);
}
