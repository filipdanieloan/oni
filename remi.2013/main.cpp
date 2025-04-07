#include <bits/stdc++.h>
using namespace std;

ifstream fin("remi.in");
ofstream fout("remi.out");

class x{
    public:
        int nr, loc;
};

int jj, n, v[10'002];
x maxim, maxim2;
bool eJJ = true;

int main(){
    fin >> jj >> n;
    maxim.nr = jj;
    maxim.loc = 0;

    for(int i = 1; i <= n; ++i){
        fin >> v[i];
        if(v[i] > maxim.nr){
            maxim.nr = v[i];
            maxim.loc = i;
            eJJ = false;
        }
    }
    v[maxim.loc] = 0;
    v[0] = maxim.nr;
    if(eJJ == false){
        for(int i = maxim.loc+1; i <= n; ++i){
            v[i-1] = v[i];
        }
    }
    maxim.loc = 0;
    if(eJJ == false){
        int i = 1;
        while(jj < v[i]){
            ++i;
        }
        for(int j = n; j >= i; --j){
            v[j] = v[j-1];
        }
        v[i] = jj;
    }
    else{

    }
    for(int i = 0; i <= n; ++i){
        fout << v[i];
    }
}