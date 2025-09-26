## GCDFinder
A simple command-line tool based on the Euclid algorithm for finding the greatest common divisor (GCD).
Includes unit tests and a Makefile for easy compilation and execution.

## Compiling and running
    run ./build.sh

## Tree of project
    .
    ├── CMakeLists.txt
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
    ├── build
    │   ├── CMakeCache.txt
    │   ├── CMakeFiles
    │   │   ├── 3.28.3
    │   │   │   ├── CMakeCCompiler.cmake
    │   │   │   ├── CMakeCXXCompiler.cmake
    │   │   │   ├── CMakeDetermineCompilerABI_C.bin
    │   │   │   ├── CMakeDetermineCompilerABI_CXX.bin
    │   │   │   ├── CMakeSystem.cmake
    │   │   │   ├── CompilerIdC
    │   │   │   │   ├── CMakeCCompilerId.c
    │   │   │   │   ├── a.out
    │   │   │   │   └── tmp
    │   │   │   └── CompilerIdCXX
    │   │   │       ├── CMakeCXXCompilerId.cpp
    │   │   │       ├── a.out
    │   │   │       └── tmp
    │   │   ├── CMakeConfigureLog.yaml
    │   │   ├── GCDFinder.dir
    │   │   │   └── src
    │   │   │       ├── EuclidianGCD.c.o
    │   │   │       ├── InputReader.c.o
    │   │   │       └── main.c.o
    │   │   ├── TargetDirectories.txt
    │   │   ├── cmake.check_cache
    │   │   ├── pkgRedirects
    │   │   └── rules.ninja
    │   ├── GCDFinder
    │   ├── build.ninja
    │   └── cmake_install.cmake
    ├── build.sh
    ├── include
    │   ├── EuclidianGCD.h
    │   └── InputReader.h
    └── src
        ├── EuclidianGCD.c
        ├── InputReader.c
        └── main.c

    17 directories, 35 files
