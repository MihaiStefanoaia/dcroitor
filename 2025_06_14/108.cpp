#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x,n,cn,c;
    
    cin >> n;
    cn = n;
    x = 0;
    c = 0;

    while(cn > 0){
        if(cn <= 9)
            x = cn;
        cn = cn / 10;
    }
    while(n > 0){
        if(n % 10 == x)
            c = c + 1;
        n = n / 10;
    }

    cout << c << endl;

    return 0;
}
