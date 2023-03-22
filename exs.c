#include <stdio.h>
#include <math.h>

int fatorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fatorial(n-1);
}

int main () {
    int valor = 0;
    int resultado = fatorial(4);
    printf("Digite um valor: ");
    scanf("%i", &valor);
    printf("O resultado é: %i", fatorial(valor));
}

int recurs(int n)
{
    if (n == 0)
        return 0;
    else
        return n + recurs(n-1);
}

int main () {
    int valor = 0;
    int resultado = recurs(4);
    printf("Digite um valor: ");
    scanf("%i", &valor);
    printf("O resultado é: %i", recurs(valor));
}
