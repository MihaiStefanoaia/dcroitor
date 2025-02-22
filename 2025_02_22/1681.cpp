#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int p, a, b;
    cin >> a;
    cin >> b;
    p = 1;
    while(b > 0){
        p = p * a;
        b = b - 1;
    }
    cout << p;
    return 0;
}
