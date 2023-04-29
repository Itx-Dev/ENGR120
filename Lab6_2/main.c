// Devin Reichenbach
// Dr. Belkhouche
// ENGR 120
// Exam 3 Problem 4

#include <stdio.h>

int CandidateA[] = {192, 147, 186, 114, 267};
int CandidateB[] = {48, 90, 12, 21, 13};
int CandidateC[] = {206, 312, 121, 108, 382};
int CandidateD[] = {37, 21, 38, 39, 29};
char space = ' ';

int main() {
    // Display Table
    printf("Precinct%2c Candidate A%2c Candidate B%2c Candidate C%2c Candidate D\n", space, space, space, space);
    printf("1%10c %d%10c %d%10c %d%10c %d\n", space, CandidateA[0], space, CandidateB[0], space, CandidateC[0], space, CandidateD[0]);
    printf("2%10c %d%10c %d%10c %d%10c %d\n", space, CandidateA[1], space, CandidateB[1], space, CandidateC[1], space, CandidateD[1]);
    printf("3%10c %d%10c %d%10c %d%10c %d\n", space, CandidateA[2], space, CandidateB[2], space, CandidateC[2], space, CandidateD[2]);
    printf("4%10c %d%10c %d%10c %d%10c %d\n", space, CandidateA[3], space, CandidateB[3], space, CandidateC[3], space, CandidateD[3]);
    printf("5%10c %d%10c %d%10c %d%10c %d\n", space, CandidateA[4], space, CandidateB[4], space, CandidateC[4], space, CandidateD[4]);

    int sumA = 0, sumB = 0, sumC = 0, sumD = 0;
    // Find sum of each candidate's votes
    for (int i = 0; i <= 4; i++) {
        sumA = sumA + CandidateA[i];
        sumB = sumB + CandidateB[i];
        sumC = sumC + CandidateC[i];
        sumD = sumD + CandidateD[i];
    }
    // Find the votes per candidate and print their total received votes and percent based on total votes
    float totalvotes = sumA + sumB + sumC + sumD;
    float percentA = (sumA / totalvotes) * 100.0;
    printf("\nCandidate A received %d votes with %.2f%%\n", sumA, percentA);
    float percentB = (sumB / totalvotes) * 100.0;
    printf("Candidate B received %d votes with %.2f%%\n", sumB, percentB);
    float percentC = (sumC / totalvotes) * 100.0;
    printf("Candidate C received %d votes with %.2f%%\n", sumC, percentC);
    float percentD = (sumD / totalvotes) * 100.0;
    printf("Candidate D received %d votes with %.2f%%\n\n", sumD, percentD);

    if (percentA > 50) {
        printf("Candidate A is the winner");
    }
    else if (percentB > 50) {
        printf("Candidate B is the winner");
    }
    else if (percentC > 50) {
        printf("Candidate C is the winner");
    }
    else if (percentD > 50) {
        printf("Candidate D is the winner");
    }

    else {

        float OriginalArray[] = {percentA, percentB, percentC, percentD};
        float SortedArray[] = {percentA, percentB, percentC, percentD};
        int winner1Index, winner2Index;
        char winner1, winner2;
        // Bubble sort to get the two highest percentages at end of array
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 3; j++){
                if (SortedArray[j] > SortedArray[j+1]) {
                    float temp = SortedArray[j];
                    SortedArray[j] = SortedArray[j + 1];
                    SortedArray[j + 1] = temp;
                }
            }
        }
        // Find index of winning candidates
        for (int i = 0; i < 4; i++) {
            if (OriginalArray[i] == SortedArray[2]){
                winner1Index = i;
            }
            if (OriginalArray[i] == SortedArray[3]){
                winner2Index = i;
            }
        }
        // Switch to make Winner 1 equal to correct candidate letter
        switch (winner1Index){
            case 0:
                winner1 = 'A';
                break;
            case 1:
                winner1 = 'B';
                break;
            case 2:
                winner1 = 'C';
                break;
            case 3:
                winner1 = 'D';
                break;
        }
        // Switch to make Winner 2 equal to correct candidate letter
        switch (winner2Index) {
            case 0:
                winner2 = 'A';
                break;
            case 1:
                winner2 = 'B';
                break;
            case 2:
                winner2 = 'C';
                break;
            case 3:
                winner2 = 'D';
                break;
        }

        printf("There must be a runoff between Candidate %c and Candidate %c", winner1, winner2);



    }


}
