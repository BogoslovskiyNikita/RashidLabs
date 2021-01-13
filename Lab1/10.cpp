#include <iostream>

using namespace std;

int main()
{
    int randomNumber = (rand() % 32) + 2;
    cout << randomNumber;
    return 0;
}
