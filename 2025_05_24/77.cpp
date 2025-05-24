#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, gasit, cif;
    cin >> n;
    gasit = 0;
    while(n!=0 && gasit == 0){
        cif = n % 10;
        n = n/10;
        if(cif % 2 == 0){
            cout << cif;
            gasit = 1;
        }
    }
    if(n == 0 && gasit == 0){
        cout << -1;
    }
    cout << endl;
    return 0;
}
