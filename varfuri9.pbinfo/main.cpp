#include <bits/stdc++.h>
using namespace std;

int n, m, matrice[101][101], c;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> matrice[i][j];
        }
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            int temp = 0;
            for(int k = 0; k < 4; ++k){
                int py = i + dy[k];
                int px = j + dx[k];
                temp += matrice[py][px];
            }
            if(temp < matrice[i][j])
                ++c;
        }
    }
    cout << c;
}