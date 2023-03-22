#include <stdio.h>
#include <math.h>
float recursivaSoma (float n) {
    if (n == 0) {
        return n;
    } else {
        // printf("%d", n);
        // printf("\n");
        //float res = (1 + (n * n)) / n;
        //printf("%f", res);
        return ((1 + (n * n)) / n) + recursivaSoma(n - 1);
    }
}

int main() {
    float resultado, numero1;
    printf("Digite um número inteiro: ");
    scanf("%f", &numero1);
    resultado = recursivaSoma(numero1);
    printf("%.2f", resultado);
    return 0;
}