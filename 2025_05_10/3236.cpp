#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream fin("parimpar2.in");
    ofstream fout("parimpar2.out");
    int x,i,p,g_i,g_p,nr_i,nr_p;
    fin >> i;
    fin >> p;
    g_i = 0;
    g_p = 0;
    nr_i = -1;
    nr_p = -1;
    while(fin>>x){
        if(x % 2 == 0){
            g_p = g_p + 1;
            if(p==g_p){
                nr_p = x;
            }
        } else {
            g_i = g_i + 1;
            if(i==g_i){
                nr_i = x;
            }
        }
    }
    if(nr_i >= 0 && nr_p >= 0){
        fout << nr_p << " " << nr_i;
    } else {
        fout << "Nu Exista";
    }
    return 0;
}
