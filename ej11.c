// Realizar un programa que rote un arreglo de n´umeros enteros a la izquierda. El arreglo
// puede estar hardcodeado. Por ejemplo, si el arreglo es [1, 2, 3, 4], el resultado debe
// ser [2, 3, 4, 1]. Cuando veamos punteros, podremos hacer una funci´on de rotaci´on
// gen´erica.

#include <stdio.h>
#include <stdint.h>

void rote_left(int arr[], int n){
    int fst = arr[0];
    for(int i = 0; i <n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = fst;
}

int main() {
    int n;
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &n);

    int arr[n];
    printf("Ingresa los elementos del arreglo: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rote_left(arr, n);

    printf("Arreglo rotado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
