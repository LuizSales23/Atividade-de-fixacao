#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
     
     printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);

    double resultado1 = pow(a, b);
    double resultado2 = pow(b, a);

    printf("%d elevado a %d = %.0lf\n", a, b, resultado1);
    printf("%d elevado a %d = %.0lf\n", b, a, resultado2);

    return 0;
}
