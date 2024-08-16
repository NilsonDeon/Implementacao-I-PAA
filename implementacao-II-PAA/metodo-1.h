#include <iostream>

using namespace std;

int findValueMethod1(int value, int* vector, int vectorSize) {
    int operations = 0;
    bool found = false; // 2 operações
    int i = 0; // 2 operações
    while ((i < vectorSize) && (!found)) { // 3 operações
        if (vector[i] == value) // 1 operação
            found = true; // 1 operação
        i++; // 1 operação

        operations += 10; // Incrementa 10 operações em cada iteração
    }

    return operations; // 1 operação
}


