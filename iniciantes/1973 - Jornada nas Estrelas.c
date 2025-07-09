#include <stdio.h>
#include <stdlib.h>

int main(){

    int estrelas, estRoubadas = 0, carneirosTotais = 0;
    scanf("%d", &estrelas);
    int *carnPorEstrela = malloc(estrelas * sizeof(int));

    for(int i = 0; i < estrelas; i++){
        scanf("%d", &carnPorEstrela[i]);
        carneirosTotais += carnPorEstrela[i];
    }

    int casaAtual, proxCasa = 0;

    while(proxCasa <= estrelas - 1 && proxCasa >= 0){
        casaAtual = proxCasa;
        if(carnPorEstrela[proxCasa] <= 0){
            break;
        }
        if(carnPorEstrela[proxCasa] % 2 == 0){
            proxCasa--;
        } else {
            proxCasa++;
        }

        carnPorEstrela[casaAtual]--;
        estRoubadas++;
    }

    printf("%d %d\n", estRoubadas, carneirosTotais - estRoubadas);
}