#include <iostream>

using namespace std;
    
int findValueMethod3(int value, int* vector,  int size){
    vector[size] = value; // 1 op

    int i = 0; // 2 op
    while(vector[i] != value) i++; // 2 op * i

    return (3 + 2*i); // retorna numero de operacoes
}

/* int main() {
    int t = 7;
    int v[t+1] = {4, 3, 1, 8, 6, 7, 5}; 
    int x = 2;

    cout << findValueMethod3(v, x, t);
    
    return 0;
} */
