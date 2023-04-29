#include <stdio.h>
#define SENTIENL -1
// Recursive Factorial Function
int factorial(int n) {
    int ans;
    if (n == 0){
        ans = 1;
    }
    else {
        ans = n * factorial(n-1);
    }

    return ans;
}

int main() {
    // Define user input variable
    int loop;
    // Loop to keep receiving integer input
    while (loop != SENTIENL) {
        printf("Print an integer between 0 and 9 or -1 to quit: ");
        scanf("%d", &loop);
        // If input is below 0 or above 9 and not -1 return invalid entry
        if (loop > 9 || loop < 0 && loop != -1){
            printf("Invalid Entry\n");
        }
        // If valid entry then print the input and the factorial result
        else {
            printf("%d factorial is %d\n",loop , factorial(loop));
        }
    }
}
