#include <stdio.h>

int main(void){
    char nota[50];
    int i;
    int soma = 0;
    for(i=0;i<50;i++){
        int notaControle;
        printf("Nota %d:\n", i+1);
        scanf("%d", &notaControle);
        nota[i] = notaControle;
        soma = soma + notaControle;
        //printf("Nota: %d\n", notaControle);
    }
    //printf("Soma: %d\n", soma);
    float media;
    media = soma/50.0;
    printf("Media: %f\n", media);
    int  Amedia = 0;
    for(i=0;i<50;i++){
        if(nota[i] > media){
            Amedia++;
        }
    }
    printf("Acima da media: %i\n", Amedia);
    return 0;
}
    
