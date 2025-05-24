#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long int n, num, maxim;
    cin >> n;
    maxim = -1;
    while(n >= 100){
        num = n % 1000;
        n = n / 10;
        if(num > maxim){
            maxim = num;
        }
    }
    cout << maxim << endl;
    return 0;
}
