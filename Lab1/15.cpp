#include <iostream>
#include <math.h>

using namespace std;

main() {
    /*ввод*/
    int mass;
    cin >> mass;
    
    /*расчет*/
    int final_mass = mass*pow(0.99, 30);

    cout << final_mass;
    
}