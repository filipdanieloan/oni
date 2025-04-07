#include <bits/stdc++.h>
using namespace std;

FILE*fin, *fout;

int p, n, m, k, c[201][201];
int cateSeGolesc[1000001];
int golireMaxima = 0;

int pp(int a){
    if(sqrt(a) == floor(sqrt(a)))
        return (sqrt(a)-1) * (sqrt(a)-1);
    else
        return floor(sqrt(a)) * floor(sqrt(a));
}

signed main(){
    fin = fopen("soricel.in", "r");
    fout = fopen("soricel.out", "w");
    fscanf(fin, "%d%d%d%d", &p, &n, &m, &k);
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            fscanf(fin, "%d", &c[i][j]);
            if(c[i][j] > 1){
                int patrat_perfect = pp(c[i][j]);
                ++cateSeGolesc[c[i][j]-patrat_perfect];
                golireMaxima = max(golireMaxima, c[i][j]-patrat_perfect);
            }
        }
    }
    if(p == 1){fprintf(fout, "%d", golireMaxima);
    fprintf(fout, " %d", cateSeGolesc[k]); return 0;}
    else{

    }
}
