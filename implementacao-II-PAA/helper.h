#include <iostream>
#include <cstdlib>
#include <ctime>
#include <filesystem>
#include <fstream>

using namespace std;

int* generateRandomVector(int size) {
    int* vector = new int[size];
    srand(time(0));

    for (int i = 0; i < size; i++) {
        vector[i] = rand() % 100;
    }

    return vector;
}

void saveOperationsToCSV(int operations1, int operations2, int operations3) {
    bool fileExists = filesystem::exists("operations.csv");

    ofstream file("operations.csv", ios::app);
    if (file.is_open()) {

        cout << "File Opened" << endl;

        if (!fileExists) {
            file << "Method 1,Method 2,Method 3\n";
        }
        file << operations1 << "," << operations2 << "," << operations3 << "\n";
        file.close();
    } else {
        cout << "Erro ao abrir o arquivo." << endl;
    }
}
