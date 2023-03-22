#include <stdio.h>
int cubo(int n)
{
    if (n == 0)
        return 0;
    else
        return pow(n, 3) + (n-1);
}

double main () {
    int valor = 0;
    double resultado = cubo(4);
    printf("Digite um valor: ");
    scanf("%i", &valor);
    printf("O resultado é: %i", cubo(valor));
}