#include <iostream>
#include <cmath>
using namespace std;

double area_circle(double r){
    return 3.14159 * pow(r, 2);
}

int main() {

    // Fórmula = pi * r;

    // Declaração de pi
    double r = 0.0;
    cin >> r;

    // Impressão
    cout << "A=" << area_circle(r) << endl;
}