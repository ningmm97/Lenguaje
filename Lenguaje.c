#include <stdio.h>

int main() {
    int A[] = {1, 3, 5, 7};
    int U[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int nA = sizeof(A) / sizeof(A[0]);
    int nU = sizeof(U) / sizeof(U[0]);

    // Inicializamos conjuntos para la unión e intersección
    int unionCon [nU];
    int intersec [nU];
    int i, j, k = 0, l = 0;

    // Calculamos la unión
    for (i = 0; i < nA; i++) {
        unionCon [k++] = A[i];
    }
    for (i = 0; i < nU; i++) {
        int encontrado = 0;
        for (j = 0; j < nA; j++) {
            if (U[i] == A[j]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            unionCon[k++] = U[i];
        }
    }

    // Calculamos la intersección
    for (i = 0; i < nA; i++) {
        for (j = 0; j < nU; j++) {
            if (A[i] == U[j]) {
                intersec [l++] = A[i];
                break;
            }
        }
    }

    // Imprimimos los resultados
    printf("La union de A y U es: ");
    for (i = 0; i < k; i++) {
        printf("%d ", unionCon[i]);
    }
    printf("\n");

    printf("La interseccion de A y U es: ");
    for (i = 0; i < l; i++) {
        printf("%d ", intersec[i]);
    }
    printf("\n");

    return 0;
}
