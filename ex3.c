#include <stdio.h>

int somaRecursiva(int n)
{
    if (n == 0)
        return 0;
    else
        return n + somaRecursiva(n-1);
}

int main () {
    int valor = 0;
    int resultado = somaRecursiva(4);
    printf("Digite um valor: ");
    scanf("%i", &valor);
    printf("O resultado é: %i", somaRecursiva(valor));
}