#include <stdio.h>
#include "Fibonacci.h"

void Fibonacci(int n) {
    int a = 1, p = 1, aux;
    for (int i = 0; i < n; i++) {
        aux = a;
        a = p;
        p += aux;
        printf("%d\t", aux);
    }
    printf("\n");
}