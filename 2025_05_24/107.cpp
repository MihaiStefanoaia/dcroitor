#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, aparitii, cif;
    cin >> n;
    cif = n % 10;
    aparitii = 0;
    while(n != 0){
        if(n % 10 == cif){
            aparitii = aparitii + 1;
        }
        n = n / 10;
    }
    cout << aparitii << endl;
    return 0;
}
