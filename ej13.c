// Realizar un programa que tire un dado de 6 caras 60 millones de veces y cuente la cantidad
// de veces que sali´o cada n´umero. Para esto, usar un array de 6 elementos. Luego imprimir
// el resultado por pantalla. Para tirar el dado aleatoriamente, usar la funci´on rand() de la
// librer´ıa stdlib.h.

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h.>

int main(){
    int counts[6] = {0};

    for(int i = 0; i <60000000;i++){
        int random_num = (rand() % 6);
        counts[random_num]++;
    }
    for (int i=0; i<6; i++){
        printf("El numero %d salio %d veces\n", i+1, counts[i]);
    }
    
}