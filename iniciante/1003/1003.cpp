#include <iostream>
using namespace std;

int soma(int a, int b){
    return a + b;
}

int main() {

    // Entrada
    int a = 0;
    cin >> a;
    int b = 0;
    cin >> b;

    // Saída
    int sum = soma(a, b);
    cout << "SOMA = " << sum << endl;
}