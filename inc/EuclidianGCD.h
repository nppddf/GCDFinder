#ifndef EUCLIDIANGCD_H
#define EUCLIDIANGCD_H

enum GCDSign {
    plus = 0,
    minus = -1
};

long long calculateGCD(long long, long long);
void swap(long long*, long long*);

#endif // EUCLIDIANGCD_H