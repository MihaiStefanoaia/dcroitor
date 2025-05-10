#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, p, x;
    cin >> n >> p;
    x = 1;
    while(x <= p){
        cout << x << " ";
        x = x * n;
    }
    return 0;
}
