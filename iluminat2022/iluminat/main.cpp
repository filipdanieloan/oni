#include <bits/stdc++.h>
using namespace std;

ifstream fin("iluminat.in");
ofstream fout("iluminat.out");

short c;
int matrice[1001][1001], n, k;

int main(){
    fin >> c >> n >> k;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            fin >> matrice[i][j];
        }
    }
}
