#include <stdio.h>
#include <math.h>

int verificaPossibilidade(int a, int b, int c){
    return (abs(b - c) < a) && (a < b + c) && (abs(c - a) < b) && (c < b + a) && (abs(a - b) < c) && (c < a + b);
}

void possivel(){
    printf("S\n");
} 
 
int main() {
 
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(verificaPossibilidade(a, b, c) || verificaPossibilidade(b, c, d) || verificaPossibilidade(a, c, d) || verificaPossibilidade(a, b, d)){
        printf("S\n");
    } else {
        printf("N\n");
    }
 
    return 0;
}