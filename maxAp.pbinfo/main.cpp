#include <bits/stdc++.h>
using namespace std;

int n,m,matrice[101][101],vf[1000001], frecvMax = INT_MIN;
int k, smecher[1000001];
bool existe[1000001];

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> matrice[i][j];
            ++vf[matrice[i][j]];
            if(frecvMax < vf[matrice[i][j]])
                frecvMax = vf[matrice[i][j]];
        }
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(vf[matrice[i][j]] == frecvMax){
                smecher[k] = matrice[i][j];
                ++k;
            }
        }
    }
    sort(smecher+1, smecher+k);
    for(int i = 1; i < k; ++i){
        if(existe[smecher[i]] == false)
            cout<<smecher[i]<<' ';
        existe[smecher[i]] = true;
    }
}