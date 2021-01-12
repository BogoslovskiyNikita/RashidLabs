#include <iostream>
#include <math.h>

using namespace std;

main() {
    //ввод координат с клавиатуры
    int x1;
    int y1;
    int x2;
    int y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    //расчет расстояния
    int d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    //вывод
    cout << d;
    return 0;
}
