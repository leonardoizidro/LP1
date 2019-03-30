#include <stdio.h>

int main(void){
    int num1, num2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    int i;
    if(num1 > num2){
       // printf("Maior\n");
        for(i=num1-1;i>num2;i--){
        float k;
        k = i;
            if((k/2.0)-(i/2) == 0){
                printf("%d\n", i);
            }
        }
    }
    else{
       // printf("Menor\n");
        for(i=num2-1;i>num1;i--){
        float k;
        k = i;
            if((k/2.0)-(i/2) == 0){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
