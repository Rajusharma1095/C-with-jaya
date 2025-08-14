#include <stdio.h>

int main() {
    for(int i = 1; i <= 5; i++) {
        int count = 4;
        
        for(int j = i; j >= 1; j--) {
            printf("%d ", j );
            j = j + count;
            count--;
        }
        
        printf("\n");
    }
    
    return 0;
}