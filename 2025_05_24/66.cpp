#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, rep;
    cin >> n;
    while(n != 0){
        n = n / 10;
        rep = rep + 1;
    }
    cout << rep << endl;
    return 0;
}
