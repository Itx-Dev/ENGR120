// Devin Reichenbach
// Dr. Belkhouche
// ENGR 120
// FizzBuzz Program
#include <stdio.h>

int n = 200;

int fizzbuzz(void) {
    while (n > 99){
        printf("Enter an integer smaller than 100: ");
        scanf("%d", &n);
    }

    for (int i = 0; i <= n; i++) {
        printf("\n%d", i);

        if (i % 3 == 0 && i % 5 == 0){
            printf(" FizzBuzz");
        }

        else if (i % 3 == 0){
            printf(" Fizz");
        }

        else if (i % 5 == 0){
            printf(" Buzz");
        }
    }

    for (int m = n + 1; m < 100; m++) {
        if (m % 3 == 0 && m % 5 == 0){
            printf("\nThe next FizzBuzz is %d", m);
            break;
        }
    }
}

int main() {
    fizzbuzz();
}
