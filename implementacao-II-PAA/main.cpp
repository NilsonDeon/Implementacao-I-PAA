#include <iostream>
#include "helper.h"
#include "metodo-1.h"
#include "metodo-2.h"
#include "metodo-3.h"

using namespace std;

int main() {
    int size = 100;
    int* vector = generateRandomVector(size);

    for (int i = 0; i < size; i++) {
        cout << vector[i] << ", ";
    }
    cout << endl;

    int operations1 = findValueMethod1(1, vector, size);
    int operations2 = findValueMethod2(1, vector);
    int operations3 = findValueMethod3(1, vector, size);

    saveOperationsToCSV(operations1, operations2, operations3);

    return 0;
}
