#include <iostream>
#include <math.h>

using namespace std;

main() {
    /*генерация случайного числа в промежутке от 100 до 900*/
    int r = rand() % 900 + 100;;
    /*вывод всего числа*/
    cout << r << "\n";
    
    /*разряды*/
    int unit = r % 10;
    r = r / 10;
    int ten = r % 10;
    r = r / 10;
    int hundred = r % 10;
    /*вывод*/
    cout << hundred<< "," << ten << "," << unit;
}