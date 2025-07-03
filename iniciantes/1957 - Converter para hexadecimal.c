#include <stdio.h>

int main() {
    int n, resto = 0, n16[10], divs = 0;
    scanf("%d", &n);
    
    while(n != 0){
        resto = n % 16;
        n = n / 16;
        n16[divs] = resto;
        divs++;
    }
    
    for(int i = divs - 1; i >= 0; i--){
        if(n16[i] < 10)
            printf("%d", n16[i]);
        else
            printf("%c", 'A' + (n16[i] - 10));  // 10 → 'A', 11 → 'B', etc.
    }
    printf("\n");

    return 0;
}
