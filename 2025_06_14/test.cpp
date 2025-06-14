#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    short int v[2];
    v[0] = 12345;
    v[1] = 789;

    cout << v[0] << ' ' << v[1] << endl;
    cout << *((int*)(v)) << endl;
    cout << *((int*)(v)) / 65536 << endl;
    cout << *((int*)(v)) % 65536 << endl;
    return 0;
}
