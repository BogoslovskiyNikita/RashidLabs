#include <iostream>
#include <math.h>

using namespace std;

main() {
    /*ввод переменных*/
    int x1, x2, x3, y1, y2, y3;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    cin >> x3;
    cin >> y3;

    /*длины сторон*/
    int side1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    int side2 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    int side3 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));

    /*полупериметр*/
    int p = (side1 + side2 + side3) / 2;

    /*площадь*/
    int sqr = sqrt(p * (p - side1) * (p - side2) * (p - side3));

    cout << sqr;
}