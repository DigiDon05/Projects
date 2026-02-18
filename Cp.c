#include <stdio.h>

int isPrime(int num) {
    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPrime(n)) {
        printf("%d is a Prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}