// Devin Reichenbach
// Dr. Belkhouche
// ENGR 120
// Array of Structures
#include <stdio.h>

char sorted[8];

struct Animal {
    char name[8];
    int length;
    int height;
    int weight;
    int top_speed;
};

void Sort(int arr[]) {
    for (int i = 0; i < 8 - 1; ++i) {
        for (int j = 0; j < 8 - i - 1; ++j) {
            // Compare two adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap Elements if not in correct order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Print Weights of animals
    for (int k = 0; k < 8; k++) {
        printf("%d kg - ", arr[k]);
        // Assign Weight Values to the names in an array
        switch (arr[k]) {
            case 350:
                puts("Pig");
                break;
            case 190:
                puts("Lion");
                break;
            case 72:
                puts("Cheetah");
                break;
            case 1000:
                puts("Horse");
                break;
            case 227:
                puts("Anaconda");
                break;
            case 620:
                puts("Bison");
                break;
            case 80:
                puts("Wolf");
                break;
            case 1800:
                puts("Hippo");
                break;
        }
    }

    for (int i = 0; i <= 8; i++){
        // Find Horse Index
        if (arr[i] == 1000){
            printf("The Horse's Index is %d", i);
        }

    }

}

int main() {
    // Define Struct Variables and Data
    struct Animal pig = {"Pig",200, 110, 350, 18};
    struct Animal lion = {"Lion",250,120,190,80};
    struct Animal cheetah = {"Cheetah",150, 94, 72, 120};
    struct Animal horse = {"Horse",240, 180, 1000, 88};
    struct Animal anaconda = {"Anaconda",880, 15, 227, 32};
    struct Animal bison = {"Bison",280, 195, 620, 56};
    struct Animal wolf = {"Wolf",160, 85, 80, 60};
    struct Animal hippo = {"Hippo",520, 150, 1800, 30};

    // All Animal Weights in Array
    int weights[] = {pig.weight,lion.weight, cheetah.weight, horse.weight, anaconda.weight, bison.weight, wolf.weight, hippo.weight};

    // Call Sort Function
    Sort(weights);

    // Find Index of Horse

}
