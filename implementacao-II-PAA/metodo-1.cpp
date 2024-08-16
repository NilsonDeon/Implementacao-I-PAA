#include <iostream>
#include "randomVector.h"

using namespace std;

bool findValue(int value, int* vector, int vectorSize){
    bool found = false;
    int i = 0;
    while((i < vectorSize) && (!found)){
        if(vector[i] == value)
            found = true;
        i++;
    }

    return found;
}

int main() {
    int* vector = generateRandomVector(1000);

    for (int i = 0; i < 1000; i++) {
            cout << vector[i] << ", ";
    }
    cout << endl;
    

    bool result = findValue(-1, vector, 1000);

    if (result)
        cout << "Achou" << endl;
    else
        cout << "Nao achou" << endl;
}

