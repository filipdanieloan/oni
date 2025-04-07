#include <bits/stdc++.h>
using namespace std;

ifstream fin("remi.in");
ofstream fout("remi.out");

class x{
public:
    short locatie, nr;
};

short n, jj, v[10001];
x maxim;

int main(){
    fin >> n >> jj;
    maxim.nr = SHRT_MIN;
    for(int i = 1; i <= n; ++i){
        fin >> v[i];
        if(v[i] > maxim.nr){
            maxim.nr = v[i];
            maxim.locatie = i;
        }
    }
    if(jj >= maxim.nr){
        v[0] = jj;
        for(int i = maxim.locatie; i < )
    }
    else{
        v[0] = maxim.nr;
        for(int i = maxim.locatie+1; i <= n; ++i){
            v[i] = v[i-1];
        }
        maxim.locatie = 0;
    }
    while()
}
