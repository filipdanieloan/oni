#include <bits/stdc++.h>
using namespace std;

int n,m,matrice[101][101],c;

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> matrice[i][j];
            if(i % 2 == 0){
                int cnt = 1;
                int p;
                int d = 2;
                int cop = matrice[i][j];
                while(cop > 1){
                    p = 0;
                    while(cop % d == 0){
                        cop /= d;
                        ++p;
                    }
                    if(p)
                        cnt *= (p+1);
                    ++d;
                    if(d * d > cop)
                        d = cop;
                }
                if(cnt == 2)
                    ++c;
            }
        }
    }
    cout << c;
}