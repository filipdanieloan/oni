#include <bits/stdc++.h>
using namespace std;

int n, m, a[21][21];

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            a[i][j] = min(i, j);
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
