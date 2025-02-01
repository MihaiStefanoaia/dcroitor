#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    int s;
    s = 0;
    while(true){
        cin >> x;
        if(x == 0){
            break;
        }
        s = s + x;
    }
    cout << s;

    return 0;
}
