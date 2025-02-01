#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned int n;
    unsigned int p;
    cin >> n;
    p = 1;
    while(n > 0){
        p = p * 10;
        n = n - 1;
    }
    cout << p << "\n";
    return 0;
}
