#include <bits/stdc++.h>
using namespace std;

int n,m,matrice[10001][10001],x;
bool gasit;

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> matrice[i][j];
        }
    }
    cin >> x;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(matrice[i][j] == x){
                gasit = true;
                break;
            }
        }
        if(gasit)
            break;
    }
    if(gasit)
        cout << "DA";
    else
        cout << "NU";
}