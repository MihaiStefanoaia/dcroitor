#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x,s,ant;
    cin >> x;
    s = x;
    do {
        ant = x;
        cin >> x;
        s = s + x;
    } while(ant != x);
    cout << s << endl;

    return 0;
}
