#include <iostream>

using namespace std;
main()
{
    //ввод трёх чисел с клавиатуры 
    int num1;
    int num2;
    int num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    //сумма
    int sum = num1 + num2 + num3 ;
    //среднее арифетическое 
    int avg = sum / 3;
    //произведение 
    int mult = num1 * num2 * num3;
    
    
    //вывод
    cout<< "\n";
    cout<< sum << "\n";
    cout<< avg << "\n";
    cout<< mult << "\n";

    return 0;
}
