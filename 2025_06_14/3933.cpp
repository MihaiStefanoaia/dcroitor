#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, g0,g1,gx;
    g0 = 0;
    g1 = 0;
    gx = 0;
    cin >> n;
    while(n > 0){
        if(n % 10 == 0)
            g0 = 1;
        else if(n % 10 == 1)
            g1 = 1;
        else
            gx = 1;

        n = n / 10;
    }

    if(g0 == 1 && g1 == 1 && gx == 0){
        cout << "da" << endl;
    } else {
        cout << "nu" << endl;
    }
    return 0;
}
