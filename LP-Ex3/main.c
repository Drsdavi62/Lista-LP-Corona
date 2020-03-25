#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o valor de posicao %d\n", i+1);
        scanf("%d", &a[i]);
    }
    printf("\n");
    for(int i = 9; i >= 0; i--){
        printf("%d\n", a[i]);
    }
}
