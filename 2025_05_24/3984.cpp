#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,x;
    cin >> a;
    cin >> b;
    x = 1;
    while(x <= b){
        cout << a * x << " ";
        x = x + 1;
    }
    cout << endl;
    return 0;
}
