#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    if(n % 2 == 0){
        n = n - 1;
    }
    while(n > 0){
        cout << n << " ";
        n = n - 2;
    }
    cout << endl;
    return 0;
}
