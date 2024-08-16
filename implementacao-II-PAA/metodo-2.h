#include <iostream>

using namespace std;

int findValueMethod2(int value, int* vector){
    int operations = 0;
    int achou = 0; // 2 operações
    int i = 0; // 2 operações
 
    while(achou == 0){ // 1 operação
        if(vector[i] == value){  // 1 operação
            achou = 1; // 1 operação
        }
        i++; // 1 operação

        operations += 4;
    }

    return operations;  // 1 operação
}

/* int main() {
    int v[] = {4, 3, 1, 8, 2, 7, 5}; 
    int x = 2;

    int ops = 5; //operações iniciais
    int result = find(v, x, ops);

    cout << "Operações: " << result << endl;
    
}
 */