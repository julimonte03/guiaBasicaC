// Generalizar el ejercicio anterior para que la rotaci´on sea un par´ametro de entrada. Por
// ejemplo, si el arreglo es [1, 2, 3, 4] y la rotaci´on es 2, el resultado debe ser [3, 4,
// 1, 2].

#include <stdio.h>
#include <stdint.h>

void rote_left(int arr[], int n, int r){
    int rot[r];

    for(int i=0; i< r; i++){ // guardamos en un arr temporal los primeros r elementos
        rot[i]= arr[i];
    }


        for(int i = r; i < n; i++){  // Mover los elementos restantes hacia la izquierda
        arr[i - r] = arr[i];
    }

    // Colocar los elementos guardados al final
    for(int i = 0; i < r; i++){
        arr[n - r + i] = rot[i];
    }
}

int main() {
    int n;
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &n);
    
    int rotation;
    printf("Ingresa la rotacion deseada: ");
    scanf("%d", &rotation);

    int arr[n];
    printf("Ingresa los elementos del arreglo: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rote_left(arr, n,rotation);

    printf("Arreglo rotado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
