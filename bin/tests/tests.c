#include <stdio.h>
#include <limits.h>
#include <assert.h>
#include "EuclidianGCD.h"
#include "InputReader.h"
#include "Utils.h"


void runTests();
void runGCDTests();
void runIOTests();
void runUtilsTests();

void runQuietly(void (*func)(void));


int main() {
    printf("Running all tests...\n");

    runGCDTests();
    runQuietly(runIOTests);
    runUtilsTests();

    printf("All tests are passed!\n");
    return (long long) 0;
}

void runGCDTests() {
    printf("Running GCD tests...\n");

    assert(calculateGCD((long long) 12, (long long) 18) == (long long) 6);
    assert(calculateGCD((long long) 100, (long long) 25) == (long long) 25);

    assert(calculateGCD((long long) 15, (long long) 0) == (long long) 15);
    assert(calculateGCD((long long) 0, (long long) 7) == (long long) 7);
    assert(calculateGCD((long long) 0, (long long) 0) == (long long) 0);

    assert(calculateGCD((long long) -12, (long long) 18) == (long long) 6);
    assert(calculateGCD((long long) 100, (long long) -25) == (long long) 25);
    assert(calculateGCD((long long) -12, -(long long) -60) == (long long) 12);

    assert(calculateGCD((long long) 123, (long long) 123) == (long long) 123);
    assert(calculateGCD((long long) 29, (long long) 17) == (long long) 1);
    assert(calculateGCD((long long) 49, (long long) -25) == (long long) 1);

    assert(calculateGCD((long long) 1234567890, (long long) 9876543210) == (long long) 90);
    assert(calculateGCD(LLONG_MAX, 0) == LLONG_MAX);
    assert(calculateGCD(LLONG_MIN + 1, 0) == LLONG_MAX);

    printf("GCD tests are passed\n");
}

void runIOTests() {
    printf("Running Input/Output tests...\n");

    long long a1 = 42, b1 = 42;
    assert(isSuccesfulRead(&a1, &b1, 2) == isValid);
    long long a2 = 0, b2 = 0;
    assert(isSuccesfulRead(&a2, &b2, 1) == notIsValid);

    printf("Input/Output tests are passed\n");
}

void runUtilsTests() {
    printf("Running utilities tests...\n");

    assert(isZero(0 == numberIsZero));
    assert(isZero((long long) 1) == numberNotIsZero);
    assert(isZero((long long) -987654321) == numberNotIsZero);

    printf("Utilities tests are passed\n");
}

void runQuietly(void (*func)(void)) {
    fflush(stdout);
    FILE* old_stdout = stdout;
    FILE* devnull = freopen("/dev/null", "w", stdout);
    if (!devnull) return;

    func();

    fflush(stdout);         
    freopen("/dev/tty", "w", old_stdout);            
}