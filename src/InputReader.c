#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "InputReader.h"
#include "Utils.h"

void setNumbers(long long* a, long long* b) {
    printf("Enter two integer numbers: ");
    int numberOfSuccesfulRead = scanf(" %lld %lld", a, b);
    printf("\n");

    while (!isSuccesfulRead(a, b, numberOfSuccesfulRead)) {
        while(getchar() != '\n');
        numberOfSuccesfulRead = scanf(" %lld %lld", a, b);
        printf("\n");
    }
}

int isSuccesfulRead(long long* a, long long* b, int numberOfSuccesfulRead) {
    int correctInputTypes = numberOfSuccesfulRead == 2;
    int bothAreNotZero = !(*a == 0 && *b == 0);
    
    if (correctInputTypes && bothAreNotZero) {
        return isValid;
    }

    printRecommendationsToUser(correctInputTypes, bothAreNotZero);
    return notIsValid;
}

void printRecommendationsToUser(int correctInputTypes, int bothAreNotZero) {
    if (!correctInputTypes && !bothAreNotZero) {
        printf("Please, enter the numerical values and make sure that they are not equal to zero at the same time: ");
    }
    else if (!correctInputTypes) {
        printf("Please, enter the numerical values: ");
    }

    else if (!bothAreNotZero) {
        printf("Please, make sure that numbers are not equal to zero at the same time: ");
    }
}

void checkForZero(long long a, long long b) {
    assert(!(a == 0 && b == 0) && "Incorrect iterable writing.");
}