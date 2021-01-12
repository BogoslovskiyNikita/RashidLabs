#include <iostream>
#include <math.h>

using namespace std;

main() {
    /*инициализацция, ввод*/
    double a,b,c,d;
    cin>>a;
    
    /*возведение в степень*/
    b=a*a;
    c=b*b;
    d=c*c;
    a=d*b;

    /*вывод*/
    cout << a;
    
}