#include <iostream>

using namespace std;
    
int metodo3(int v[], int x, int t){
    v[t] = x; // 1 op

    int i = 0; // 2 op
    while(v[i] != x) i++; // 2 op * i

    return (3 + 2*i); // retorna numero de operacoes
}

int main() {
    int t = 7;
    int v[t+1] = {4, 3, 1, 8, 6, 7, 5}; 
    int x = 2;

    cout << metodo3(v, x, t);
    
    return 0;
}
