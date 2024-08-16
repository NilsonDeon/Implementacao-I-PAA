#include <iostream>
#include "randomVector.h"

using namespace std;

bool findValue(int value, int* vector, int vectorSize){
    bool find = false;
    int i = 0;
    while((i < vectorSize) && (find == false)){
        if(vector[i] == value)
            find = true;
        i++;
    }

    return find;
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
