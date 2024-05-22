#include <stdio.h>

// Função para trocar dois elementos
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Função para executar o algoritmo Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j;
    // Loop através de todos os elementos do array
    for (i = 0; i < n-1; i++) {
        // Últimos i elementos já estão no lugar
        for (j = 0; j < n-i-1; j++) {
            // Trocar se o elemento encontrado for maior que o próximo elemento
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

// Função para imprimir um array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função principal para testar o Bubble Sort
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array original: \n");
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    printf("Array ordenado: \n");
    printArray(arr, n);
    return 0;
}
