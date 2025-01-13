#include <iostream>
using namespace std;

bool validation(int a, int b, int c, int d){

    if( (a%2) == 0){ 
        if( (c>0) && (d>0) ){ 
            if( (c+d) > (a+b) ){
                if( (b>c) && (d>a) ){
                    return true;
                }
            }
        }
    }

    return false;
}

int main() {

    int a = 0, b = 0, c = 0, d = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    bool resp = validation(a, b, c, d);

    if(resp){
        cout << "Valores aceitos" << endl;
    } else {
        cout << "Valores nao aceitos" << endl;
    }
}