#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double delta(double a, double b, double c){
    return (b*b) - 4 * a * c;
}

void baskara(double delta, double b, double a){
    if( (delta < 0.0) || delta == 0.0 || a == 0.0) {
        cout << "Impossivel calcular" << endl;
    }else if(delta > 0.0){
        double r1 = (-b + sqrt(delta))/(2*a);
        double r2 = (-b - sqrt(delta))/(2*a);
        cout << fixed << setprecision(5);
        cout << "R1 = " << r1 << "\nR2 = " << r2 << endl;
    }
}

int main() {

    // Fórmula de Baskara
    // x = (-b + raiz(b²-4*a*c))/2*a
    // Se delta > 0 tem duas (2) soluções reais
    // Se delta = 0 tem uma (1) solucação real
    // Se detala < 0 NÃo tem soluções reais

    // Entrada de valores
    double a = 0, b = 0, c = 0;
    cin >> a;
    cin >> b;
    cin >> c;

    double dlt = delta(a, b, c);
    baskara(dlt, b, a);
}