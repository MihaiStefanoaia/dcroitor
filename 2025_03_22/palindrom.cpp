#include <iostream>
#include <fstream>

using namespace std;

bool e_palindrom(int nr){
    int cnr,cif,ogl = 0;
    cnr = nr;
    while(nr > 0){
        cif = nr % 10;
        ogl = ogl * 10 + cif;
        nr = nr / 10;    
    }
    // cout << "PALINDROM FUNCTIE:" << "ogl: " << ogl << " cnr: " << cnr;
    return cnr == ogl;
}

int main(int argc, char const *argv[])
{
    ifstream fin ("palindrom.in");
    ofstream fout("palindrom.out");

    int c, x, nr, cif, ogl, out, cnr, un_nr, doi_nr;
    fin >> c >> x;

    for(int i = 0; i < x; i++){
        fin >> nr;
        cnr = nr;
        ogl = 0;
        if (c == 1){
            if(e_palindrom(nr)){
                cout << nr << '\n';
                out = out + 1;
            }
        } else if (c == 2){
            bool bun = false;
            for(int j = 0; j <= 9; j++){
                for(int x = 1; x <= nr * 10; x = x * 10){
                    if(x > nr && j == 0){
                        continue;
                    }
                    cnr = nr;
                    int dr = cnr % x;
                    cnr = (cnr / x) * 10;
                    cnr = cnr + j;
                    cnr = cnr * x + dr;
                    cout << cnr << ' ' << e_palindrom(cnr) << '\n';
                    if(e_palindrom(cnr)){
                        cout << cnr << '\n';
                        bun = true;
                        break;
                    }
                }
                cout << '\n';
                if(bun){
                    break;
                }
            }
            if(bun){
                cout << nr << '\n';
                out = out + 1;
            }
            
        } else if (c == 3){
            bool bun = false;
            for(int j = 0; j <= 9; j++){
                for(int x = 1; x <= nr * 10; x = x * 10){
                    if(x > nr && j == 0){
                        continue;
                    }
                    un_nr = nr;
                    int dr = un_nr % x;
                    un_nr = (un_nr / x) * 10;
                    un_nr = un_nr + j;
                    un_nr = un_nr * x + dr;

                    for(int k = 0; k <= 9; k++){
                        for(int y = 1; y <= nr * 10; y = y * 10){
                            if(y > nr && k == 0){
                                continue;
                            }
                            doi_nr = un_nr;
                            dr = doi_nr % y;
                            doi_nr = (doi_nr / y) * 10;
                            doi_nr = doi_nr + k;
                            doi_nr = doi_nr * y + dr;

                            cout << doi_nr << ' ' << e_palindrom(doi_nr) << '\n';
                            if(e_palindrom(doi_nr)){
                                cout << doi_nr << '\n';
                                bun = true;
                                break;
                            }        
                        }
                    }
                }
                cout << '\n';
                if(bun){
                    break;
                }
            }
            if(bun){
                cout << nr << '\n';
                out = out + 1;
            }
        }
    }
    fout << out;

    return 0;
}
