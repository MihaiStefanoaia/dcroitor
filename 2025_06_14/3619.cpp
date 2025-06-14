#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int c1,c2,nr,a,b,c;
    cin >> c1;
    cin >> c2;

    a = c1;
    while(a <= 9){
        c = 0;
        while(c <= c2){
            b = 0;
            while(b < 10){
                nr = a * 1000 + b * 100 + c * 10 + b;
                cout << nr << endl;
                b = b + 2;
            }
            c = c + 1;
        }
        a = a + 1;
    }
    return 0;
}
