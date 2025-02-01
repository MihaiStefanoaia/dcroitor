#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int k;
    int x;
    int s;
    cin >> n;
    cin >> k;
    s = 0;
    while(k > 0){
        cin >> x;
        s = s + x;
        k = k - 1;
    }
    if (n + s == n){
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}
