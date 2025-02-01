#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned int n;
    unsigned int x;
    cin >> n;
    unsigned int s;
    s = 0;
    while(n > 0){
        cin >> x;
        s = s + x;
        n = n - 1;
    }
    cout << s;
    return 0;
}
