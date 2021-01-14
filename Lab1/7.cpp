#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num;
    cin >> num;
    char buffer [33];
    itoa (num,buffer,10);
    cout << buffer;
    return 0;

    
}
