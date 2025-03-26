#include <bits/stdc++.h>
using namespace std;

int n,m,matrice[101][101],cnt;
bool ok = true;

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        ok = true;
        for(int j = 1; j <= m; ++j){
            cin >> matrice[i][j];
            if(j > 1 && matrice[i][j] != matrice[i][j-1]){
                ok = false;
            }
        }
        if(ok)
            ++cnt;
    }
    cout << cnt;
}