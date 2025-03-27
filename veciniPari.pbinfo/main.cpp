#include <bits/stdc++.h>
using namespace std;

int n,m,matrice[101][101],c,px,py;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> matrice[i][j];
        }
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            for(int k = 0; k < 4; ++k){
                px = j + dx[k];
                py = i + dy[k];
            }
        }
    }
}