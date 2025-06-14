#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, p,g;
    cin >> n;
    p = 1;
    g = 0;

    while(n > 0){
        if((n%10) %2 == 1){
            p = p * (n%10);
            g = 1;
        }
        n = n / 10;
    }
    if(g == 1){
        cout << p << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
