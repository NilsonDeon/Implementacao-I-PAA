#include <iostream>
#include <cstdlib>
#include <ctime>

int* generateRandomVector(int size) {
    int* vector = new int[size];
    srand(time(0));

    for (int i = 0; i < size; i++) {
        vector[i] = rand() % 100;
    }

    return vector;
}