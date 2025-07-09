#include <stdio.h>

int main() {
 
    long long int numero;
    int k = 0, nVetor[20];
    scanf("%lld", &numero);
 
    while(numero > 0){
        nVetor[k++] = numero % 10;
        numero /= 10;
    }   

    for(int i = 0; i < k; i++){
        printf("%d", nVetor[i]);
    }
    printf("\n");


    return 0;
}