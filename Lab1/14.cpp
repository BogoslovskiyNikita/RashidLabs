#include <iostream>
#include <math.h>

using namespace std;

main() {
    int r;
    cin >> r;
    
    /*площадь*/
    int sqr = M_PI*r*r;
    /*длина окружности*/
    int d = 2*M_PI*r;
    
    cout << sqr << "\n";
    cout << d;
}