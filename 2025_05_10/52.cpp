#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int s,x;
    s = 0;
    cin >> x;
    while(x != 0){
        if(x % 2 == 0){
            s = s + x;
        }
        cin >> x;
    }
    cout << s << endl;
    return 0;
}
