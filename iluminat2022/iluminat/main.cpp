#include <bits/stdc++.h>
using namespace std;

ifstream fin("iluminat.in");
ofstream fout("iluminat.out");

class locatie{
    public:
        int l, c;
};

short c;
int matrice[1001][1001], n, k, maxim = INT_MIN, numara2;
locatie undeEsteMaxim;


int main(){
    fin >> c >> n >> k;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            fin >> matrice[i][j];
        }
    }
    if(c < 3){
        for(int pasi = 1; pasi <= n; ++pasi){
            maxim = INT_MIN;
            for(int i = 1; i <= n; ++i){
                for(int j = 1; j <= n; ++j){
                    if(maxim < matrice[i][j]){
                        maxim = matrice[i][j];
                        undeEsteMaxim.l = i;
                        undeEsteMaxim.c = j;
                    }
                }
            }
            if(c == 1 && pasi == k){
                fout << maxim;
                return 0;
            }
            for(int i = 1; i <= n; ++i){
                if(c == 2 && matrice[i][undeEsteMaxim.c] > 0 && pasi == k)
                    numara2 += matrice[i][undeEsteMaxim.c];
                matrice[i][undeEsteMaxim.c] = -1;
            }
            for(int j = 1; j <= n; ++j){
                if(c == 2 && matrice[undeEsteMaxim.l][j] > 0 && pasi == k)
                    numara2 += matrice[undeEsteMaxim.l][j];
                matrice[undeEsteMaxim.l][j] = -1;
            }
            if(c == 2 && pasi == k){
                fout << numara2;
                return 0;
            }
        }
    }
    else if(c == 3){
        maxim = INT_MIN;
        for(int i = 1; i <= n - k + 1; ++i){
            for(int j = 1; j <= n - k + 1; ++j){
                int temp = 0;
                for(int linie = i; linie - i < k; ++linie){
                    for(int coloana = j; coloana - j < k; ++coloana){
                        temp += matrice[linie][coloana];
                    }
                }
                maxim = max(maxim, temp);
            }
        }
        fout << maxim;
    }
}
