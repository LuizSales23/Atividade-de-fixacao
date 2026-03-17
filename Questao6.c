#include <stdio.h>
#include <math.h>

int main() {
    double numero, raiz;

    printf("Digite um numero: ");
    scanf("%lf", &numero);

    raiz = sqrt(numero);

    printf("A raiz quadrada de %.0f é %.2f\n", numero, raiz);

    return 0;
}
