#include <bits/stdc++.h>
using namespace std;

ifstream fin("pasari.in");
ofstream fout("pasari.out");

int c, n, l, v[1001][1001];

int main(){
    fin >> c >> n;
    if(c == 1){
        fin >> l;
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            fin >> v[i][j];
        }
    }
    if(c == 1){
        for(int j = 1; j <= n; ++j){
            int temp = 0;
            //parcurg
        }
    }
}
