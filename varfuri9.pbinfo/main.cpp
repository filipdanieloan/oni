#include <bits/stdc++.h>
using namespace std;

int n, m, matrice[101][101], sumtemp, c;

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> matrice[i][j];
        }
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            sumtemp = 0;
            if(i == 1){
                if(j == 1){
                    if(matrice[i][j+1] % 2 == 0 && matrice[i+1][j] % 2 == 0){
                        sumtemp = matrice[i][j+1] + matrice[i+1][j];
                        if(sumtemp < matrice[i][j])
                            ++c;
                        continue;
                    }
                }
                if(j == m){
                    if(matrice[i][j-1] % 2 == 0 && matrice[i-1][j] % 2 == 0){
                        sumtemp = matrice[i][j-1] + matrice[i-1][j];
                        if(sumtemp < matrice[i][j])
                            ++c;
                        continue;
                    }
                }
                if(matrice[i][j+1] % 2 == 0 && matrice[i][j-1] % 2 == 0 && matrice[i+1][j] % 2 == 0){
                    sumtemp = matrice[i][j+1] + matrice[i][j-1] + matrice[i+1][j];
                    if(sumtemp < matrice[i][j])
                        ++c;
                }
                continue;
            }
            if(i == n){
                if(j == 1){
                    if(matrice[i][j+1] % 2 == 0 && matrice[i-1][j] % 2 == 0){
                        sumtemp = matrice[i][j+1] + matrice[i-1][j];
                        if(sumtemp < matrice[i][j])
                            ++c;
                        continue;
                    }
                }
                if(j == m){
                    if(matrice[i][j-1] % 2 == 0 && matrice[i-1][j] % 2 == 0){
                        sumtemp = matrice[i][j-1] + matrice[i-1][j];
                        if(sumtemp < matrice[i][j])
                            ++c;
                        continue;
                    }
                }
                if(matrice[i][j+1] % 2 == 0 && matrice[i][j-1] % 2 == 0 && matrice[i-1][j] % 2 == 0){
                    sumtemp = matrice[i][j+1] + matrice[i][j-1] + matrice[i-1][j];
                    if(sumtemp < matrice[i][j])
                        ++c;
                }
                continue;
            }
            if(matrice[i][j+1] % 2 == 0 && matrice[i][j-1] % 2 == 0 && matrice[i-1][j] % 2 == 0 && matrice[i+1][j] % 2 == 0){
                sumtemp = matrice[i][j+1] + matrice[i][j-1] + matrice[i-1][j] + matrice[i+1][j];
                if(sumtemp < matrice[i][j])
                    ++c;
                continue;
            }
        }
    }
    cout << c;
}