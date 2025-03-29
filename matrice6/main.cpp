#include <bits/stdc++.h>
using namespace std;

ifstream fin("matrice6.in");
ofstream fout("matrice6.out");

int n, a[101][101], maxim = INT_MIN, minim = INT_MAX;
bool gasit;

int main(){
    fin >> n;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            fin >> a[i][j];
            maxim = max(maxim, a[i][j]);
            minim = min(minim, a[i][j]);
        }
    }
    for(int i = 1; i <= n; ++i){
        gasit = false;
        for(int j = 1; j <= n; ++j){
            if(a[i][j] == maxim){
                for(int k = 1; k <= n; ++k){
                    a[i][k] += minim;
                }
                gasit = true;
                break;
            }
        }
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            fout << a[i][j] << ' ';
        }
        fout << '\n';
    }
}
