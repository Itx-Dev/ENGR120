// Devin Reichenbach
// Dr. Belkhouche
// ENGR 120
// Password Validation

#include <stdio.h>
#include <string.h>
// Define password needed for access
#define PASSWORD "abc123"

int main() {
    // Define password user enters
    char userPassword[6];
    // Prompt user to enter password
    printf("Enter Password: ");
    scanf("%s", userPassword);
    // If entered password equals correct password
    if (strcmp(userPassword, PASSWORD) == 0) {
        printf("Access Granted");
    }
    else {
        printf("Access Denied");
    }
}
