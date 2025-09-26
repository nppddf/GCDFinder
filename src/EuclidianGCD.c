/*Euclid GCD algorithm explanation :  https://en.wikipedia.org/wiki/Greatest_common_divisor */

#include <stdlib.h>
#include <math.h>
#include "EuclidianGCD.h"

long long calculateGCD(long long a, long long b) {    
    a = llabs(a), b = llabs(b);

    if (a == 0 || b == 0) {
        return (a > b ? a : b);
    }

    if (a < b) {
        swap(&a, &b);
    }

    while (b > 0) {
        a %= b;
        swap(&a, &b);
    }

    return a;
}

void swap(long long* a, long long* b) {
    long long temp = *a;
    *a = *b;
    *b = temp;
}