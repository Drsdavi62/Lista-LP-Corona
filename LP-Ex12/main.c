#include <stdio.h>
#include <stdlib.h>

int main(){
    char resp[5][10];
    char gab[10];
    int nota = 0;
    int notas[5];

    for(int i = 0; i < 5; i++){
        printf("Digite as respostas do aluno %d\n", i + 1);
        for(int j = 0; j < 10; j++){
            resp[i][j] = getchar();
            fflush(stdin);
        }
    }

    printf("Gabarito\n");
    for(int i = 0; i < 10; i++){
        printf("Questao %d = ", i + 1);
        scanf("%c", &gab[i]);
        fflush(stdin);
        if(gab[i] != 'a' && gab[i] != 'b' && gab[i] != 'c' &&
            gab[i] != 'd' ){
            i = i - 1;
            continue;
        }
    }

    printf("Notas dos Alunos\n");

    for(int i = 0; i < 5; i++){
        printf("Aluno %d\n", i + 1);
        for(int j = 0; j < 10; j++){
            if(resp[i][j] == gab[j]){
                nota++;
            }
        }
        notas[i] = nota;
        printf("%d\n", notas[i]);
        nota = 0;
    }

}
