#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned int n;
    unsigned int p;
    cin >> n;
    cout << 1;
    while(n > 0){
        cout << '0';
        n = n - 1;
    }
    return 0;
}
