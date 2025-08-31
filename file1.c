#include <stdio.h>
#include <stdlib.h>

// Function to check if number is prime
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    FILE *f1, *f2, *f3;
    int n;

    // Step 1: Store numbers in FILE1
    f1 = fopen("FILE1.txt", "w");
    if (f1 == NULL) {
        printf("Error opening FILE1!\n");
        exit(1);
    }

    printf("Enter numbers to store in FILE1 (enter -1 to stop):\n");
    while (1) {
        scanf("%d", &n);
        if (n == -1) break;
        putw(n, f1);
    }
    fclose(f1);

    // Step 2: Separate Prime and Non-Prime
    f1 = fopen("FILE1.txt", "r");
    f2 = fopen("PRIME.txt", "w");
    f3 = fopen("NONPRIME.txt", "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("Error opening one of the files!\n");
        exit(1);
    }

    while ((n = getw(f1)) != EOF) {
        if (isPrime(n))
            putw(n, f2);   // Prime → PRIME.txt
        else
            putw(n, f3);   // Non-Prime → NONPRIME.txt
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    // Step 3: Display Prime numbers
    f2 = fopen("PRIME.txt", "r");
    printf("\nPrime numbers are:\n");
    while ((n = getw(f2)) != EOF) {
        printf("%d ", n);
    }
    fclose(f2);

    // Step 4: Display Non-Prime numbers
    f3 = fopen("NONPRIME.txt", "r");
    printf("\nNon-Prime numbers are:\n");
    while ((n = getw(f3)) != EOF) {
        printf("%d ", n);
    }
    fclose(f3);

    return 0;
}