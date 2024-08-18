#include <iostream>
#include "helper.h"
#include "metodo-1.h"
#include "metodo-2.h"
#include "metodo-3.h"

using namespace std;

int main() {
    int size = 100;
    int* vector = generateRandomVector(size);

    vector[3] = 100;
    int operations1 = findValueMethod1(100, vector, size);
    int operations2 = findValueMethod2(100, vector);
    int operations3 = findValueMethod3(100, vector, size);
    saveOperationsToCSV(operations1, operations2, operations3);

    vector[size / 2] = 101;
    operations1 = findValueMethod1(101, vector, size);
    operations2 = findValueMethod2(101, vector);
    operations3 = findValueMethod3(101, vector, size);
    saveOperationsToCSV(operations1, operations2, operations3);

    vector[size - 3] = 102;
    operations1 = findValueMethod1(102, vector, size);
    operations2 = findValueMethod2(102, vector);
    operations3 = findValueMethod3(102, vector, size);
    saveOperationsToCSV(operations1, operations2, operations3);

}