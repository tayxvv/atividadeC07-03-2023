#include <stdio.h>
int c = 0;
void recursivaCrescente (int n) {
    if (n == 0) {
        printf("%d", n);
    } else {
        recursivaCrescente(n-1);
        printf("%d", n);
    }
}

int main() {
    int valor = 4;
    recursivaCrescente(valor);
    printf("\n");
    return 0;
}