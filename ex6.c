#include <stdio.h>
int c = 0;
int recursivaExpoente (int n1, int n2) {
    if (n2 == 0) {
        return 1;
    } else {
        // printf("%d", n2);
        // printf("%d", n1);
        return n1 * recursivaExpoente(n1, n2-1);
    }
}

int main() {
    int numero1, numero2, resultado;
    printf("Digite um número inteiro: ");
    scanf("%i", &numero1);
    printf("Digite um número inteiro: ");
    scanf("%i", &numero2);
    resultado = recursivaExpoente(numero1, numero2);
    printf("%d", resultado);
    return 0;
}