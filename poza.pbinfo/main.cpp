#include <bits/stdc++.h>
using namespace std;

int n, m;
bool a[101][101];
int eSt, eDr, eSus, eJos;

void declaratii(){
    eSt = INT_MAX;
    eDr = INT_MIN;
    eSus = INT_MAX;
    eJos = INT_MIN;
}

int main(){
    declaratii();
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> a[i][j];
            bool ok;
            if(a[i][j]){
                if(j < eSt){
                    eSt = j;
                }
                if(j > eDr){
                    eDr = j;
                }
                if(i < eSus){
                    eSus = i;
                }
                if(i > eJos){
                    eJos = i;
                }
            }
        }
    }
    int x = eJos - eSus + 1;
    int y = eDr - eSt + 1;
    cout << x << ' ' << y << '\n';
    for(int i = eSus; i <= eJos; ++i){
        for(int j = eSt; j <= eDr; ++j){
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}