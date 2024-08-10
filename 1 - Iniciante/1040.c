#include <stdio.h>

int main(){

    float notas[4] = {0};
    float peso[] = {2, 3, 4, 1};

    scanf("%f %f %f %f", &notas[0], &notas[1], &notas[2], &notas[3]);

    float media;
    media = ((notas[0] * peso[0])+(notas[1] * peso[1])+(notas[2] * peso[2])+(notas[3] * peso[3]))/(peso[1] + peso[2] + peso[3] + peso[0]);

    if(media < 5.0){
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }else if(media >= 7.0){
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }else{
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        float notaExame = 0;
        scanf("%f", &notaExame);

        printf("Nota do exame: %.1f\n", notaExame);

        float mediaFinal = (notaExame + media)/2;
        if(mediaFinal >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", mediaFinal);
        }else{
            printf("Aluno reprovado\n");
            printf("Media final: %.1f\n", mediaFinal);
        }
    }

    return 0;
}