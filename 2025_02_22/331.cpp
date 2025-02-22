#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    while(n > 0){
        cout << 2 * (n-1) + 1 << " ";
        n = n-1;
    }
    return 0;
}
