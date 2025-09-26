#include <stdio.h>
#include <math.h>
#include <InputReader.h>
#include <EuclidianGCD.h>

int main() {
    long long a = 0, b = 0;
    setNumbers(&a, &b);

    long long gcd = calculateGCD(a, b);
    printf("The grand common divisor of %lld and %lld is %lld\n", a, b, gcd);

    return 0;
}