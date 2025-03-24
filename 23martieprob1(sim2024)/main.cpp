#include <bits/stdc++.h>
using namespace std;

ifstream fin("sim.in");
ofstream fout("sim.out");

int c, n, k, v[1001/*linie*/][1001/*coloana*/], numarinpatratica[1001][1001];
int maxim1 = INT_MIN;
int gradfericire[1002001/*nr cetatean*/];

int main(){
    fin >> c >> n >> k;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            fin >> v[i][j];
            ++numarinpatratica[i][j];
            if(c == 1){
                if(v[i][j] == 1){
                    --numarinpatratica[i][j];
                    ++numarinpatratica[i-1][j];
                }
                else if(v[i][j] == 2){
                    --numarinpatratica[i][j];
                    ++numarinpatratica[i+1][j];
                }
                else if(v[i][j] == 3){
                    --numarinpatratica[i][j];
                    ++numarinpatratica[i][j-1];
                }
                else if(v[i][j] == 4){
                    --numarinpatratica[i][j];
                    ++numarinpatratica[i][j+1];
                }
            }
        }
    }
    if(c == 1){
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= n; ++j){
                maxim1 = max(maxim1, numarinpatratica[i][j]);
            }
        }
        fout << maxim1;
        return 0;
    }
    else{

    }
}