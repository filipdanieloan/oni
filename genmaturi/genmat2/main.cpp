#include <bits/stdc++.h>
using namespace std;

int n, a[25][25];

int main(){
    cin >> n;
    for(int j = 1; j <= n; ++j){
        for(int i = 1; i <= n; ++i){
            if(i != j)
                a[i][j] = n+1-j;
        }
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
