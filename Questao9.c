#include <stdio.h>

int main() {
    int a;
    int b;
        printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
     
     printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);

    int resto = a % b;

    printf("Resto da divisao: %d\n", resto);

    return 0;
}
