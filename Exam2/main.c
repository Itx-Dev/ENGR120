// Devin Reichenbach
// Dr. Belkhouche
// ENGR 120
// Calculate Polynomial in C

#include <stdio.h>
#include <math.h>

int arr[10];
int n;
float x, result;

int main() {
    // Prompt User for Degree of Polynomial
    printf("Input the degree of the polynomial: ");
    scanf("%d", &n);

    // Make sure the degree is between 0 and 10
    while (n > 10 || n < 0) {
        printf("Sorry, degree is greater than 10 or less than 0\nTry Again.\n");
        printf("Input the degree of the polynomial: ");
        scanf("%d", &n);
    }

    // Get values for array from user
    for (int i = 0; i <= n; i++) {
        printf("Input coefficient a%d: ", i);
        scanf("%d", &arr[i]);
    }

    // Prompt User for x value
    printf("Input the value of x you wish to evaluate the polynomial at: ");
    scanf("%f", &x);

    // Calculate Result for Polynomial with given values
    for (int j = 0; j <= n; j++) {
        result = result + arr[j] * pow(x, j);
    }

    // Print Result
    printf("Result of polynomial is %.2f", result);

    return 0;
}
