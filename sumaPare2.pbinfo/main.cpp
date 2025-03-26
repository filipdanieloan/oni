#include <bits/stdc++.h>
using namespace std;

int n, m, matrice[101][101], sum;

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> matrice[i][j];
            if(matrice[i][j] % 2 == 0){
                sum += matrice[i][j];
            }
        }
    }
    cout << sum;
}