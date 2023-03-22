#include <stdio.h>
#include <math.h>
float recursivaSomaFracao (float n) {
    if (n == 0) {
        return 0;
    } else {
        // printf("%d", n);
        // printf("\n");
        //float res = (1 + (n * n)) / n;
        //printf("%f", res);
        return 1 / n + recursivaSomaFracao(n - 1);
    }
}

float main() {
    float resultado, numero1;
    printf("Digite um número inteiro: ");
    scanf("%f", &numero1);
    resultado = recursivaSomaFracao(numero1);
    printf("%.2f", resultado);
    return 0;
}