#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x,t,y,n;
    float apa;
    cin >> x;
    cin >> t;
    cin >> y;
    apa = x;
    while(apa > y){
        n = n + 1;
        apa = (apa * 3) / 4;
    }
    cout << n * t << endl;
    return 0;
}
