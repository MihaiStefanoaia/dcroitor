#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, cif, par, impar;
    cin >> n;
    par = -1;
    impar = 10;
    while(n!=0){
        cif = n % 10;
        n = n/10;
        if(cif % 2 == 0){
            if(cif > par){
                par = cif;
            }
        } else {
            if(cif < impar){
                impar = cif;
            }
        }
    }
    cout << par * impar << endl;
    return 0;
}
