#include <iostream>
#include <fstream>

using namespace std;

class semafor {
public:
    int r;
    int g;
    int v;
    int t;
    int duratie_ciclu(){
        return r + 2*g + v;
    }
    int culoare_la_timpul(int x){
        x = x + t;
        x = x % duratie_ciclu();
        if( x < r)
            return 0;
        if( x < r + g)
            return 1;
        if( x < r + g + v)
            return 2;
        return 1;
    }
    int timp_verde(){
        auto x = t % duratie_ciclu();
        if(x < r){ // rosu
            return r - x + g;
        }
        if(x < r + g){ // primul galben
            return (r + g) - x;
        }
        if(x < r + g + v){ // verde
            return 0;
        }
        // al doilea galben
        return (r + g) + ( duratie_ciclu() - x);
    }
};


int main(int argc, char const *argv[])
{
    ifstream fin ("semafoare.in");
    ofstream fout("semafoare.out");

    int c;
    semafor s1, s2;
    fin >> c;
    fin >> s1.r >> s1.g >> s1.v;
    fin >> s2.r >> s2.g >> s2.v;
    fin >> s1.t >> s2.t;

    if(c == 1){
        int mn = min(s1.timp_verde(), s2.timp_verde());
        cout << mn << '\n';
    } else {
        int x = 0;
        while(s1.culoare_la_timpul(x) != s2.culoare_la_timpul(x)){
            x = x + 1;
        }
        cout << x << '\n';
    }
    return 0;
}
