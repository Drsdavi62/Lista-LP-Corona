#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um valor par de posicao %d\n", i+1);
        scanf("%d", &a[i]);
        if(a[i]%2 != 0){
            i = i - 1;
            continue;
        }
    }

    for(int i = 9; i >= 0; i--){
        printf("%d\n", a[i]);
    }
}
