#include <iostream>
using namespace std;

int soma(int a, int b){
    return a + b;
}

int main() {
    // Declaração
    int a = 0; 
    int b = 0;

    // Atribuição
    cin >> a; 
    cin >> b;

    // Soma
    int x = soma(a, b);
    cout << "X = " << x << endl;

    return 0;
}