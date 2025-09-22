## GCDFinder
Simple command-line Great Common Diviser (GCD) finder Euclide algorithm based.
Includes unit tests and a Makefile for easy compilation and execution.

## Compiling and running
    To compile the exetable, run 'make' in '\GCDFinder'
    To run the main.exe, run './bin/run/main.exe' in '\GCDFinder'

    To compile the tests, run 'make test' in '\GCDFinder'
    To run the tests, run './bin/tests/tests.exe' in '\GCDFinder'

    To clean project from .o and .exe files run 'make clean' in '\GCDFinder'

## Tree of project
    .
    ├── Makefile
    ├── README.md
    ├── bin
    │   ├── obj
    │   │   ├── EuclidianGCD.o
    │   │   ├── InputReader.o
    │   │   ├── Utils.o
    │   │   └── main.o
    │   ├── run
    │   │   └── main.exe
    │   └── tests
    │       ├── tests.c
    │       └── tests.exe
    ├── inc
    │   ├── EuclidianGCD.h
    │   ├── InputReader.h
    │   └── Utils.h
    └── src
        ├── EuclidianGCD.c
        ├── InputReader.c
        ├── Utils.c
        └── main.c

    7 directories, 16 files

