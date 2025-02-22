#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    long int n,x,y;
    cin >> n;
    while(n > 0){
        cin >> x;
        if(x < 0){
            x = -1 * x;
        }
        y = 1;
        while(y * y * y <= x){
            if(y * y * y == x){
                cout << "DA\n";
            }
            y = y + 1;
        }
        y = y - 1;
        if(y == 0){
            cout << "DA\n";
        }
        if(x != y * y * y){
            cout << "NU\n";
        }
        n = n - 1;
    }
    return 0;
}
