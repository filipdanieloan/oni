#include <bits/stdc++.h>
using namespace std;

int n, m, matrice[101][101], sum;

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        sum = 0;
        for(int j = 1; j <= m; ++j){
            cin >> matrice[i][j];
            sum += matrice[i][j];
        }
        cout << sum << ' ';
    }
}