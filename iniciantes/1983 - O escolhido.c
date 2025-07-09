#include <stdio.h>
 
int main() {
 
    int nAlunos,  mAlunoAtual, mAlunoMaiorNota;
    double maiorNota = -99999999, notaAtual;
    scanf("%d", &nAlunos);
    
    for(int i = 0; i < nAlunos; i++){
        scanf("%d %lf", &mAlunoAtual, &notaAtual);
        if(notaAtual > maiorNota){
            maiorNota = notaAtual;
            mAlunoMaiorNota = mAlunoAtual;
        }
    }

    if(maiorNota >= 8.00){
        printf("%d\n", mAlunoMaiorNota);
    } else {
        printf("Mininum note not reached\n");
    }
 
    return 0;
}