#ifndef InputReader_H
#define InputReader_H

enum isValidNumbersResultCodes {
    notIsValid = 0,
    isValid = 1
};

void setNumbers(long long*, long long*);
int isSuccesfulRead(long long*, long long*, int);
void printRecommendationsToUser(int, int);
void checkForZero(long long, long long);

#endif // InputReader_H