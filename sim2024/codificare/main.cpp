#include <bits/stdc++.h>
using namespace std;

ifstream fin("codificare.in");
ofstream fout("codificare.out");

int c, n, k, cif, max1 = INT_MIN, min1 = INT_MAX;

int ogl(int a){
    int ogli = 0;
    while(a){
        ogli *= 10;
        ogli += a%10;
        a /= 10;
    }
    return ogli;
}

int main(){
    fin >> c;
    if(c == 1) fin >> n;
    else fin >> k >> cif;
    if(c == 1){
        //daca un numar are prima cifra para, atunci se face mai mare prin codificare
        //prima cifra a unui nr intreg x este ogl(x)%10
        for(int i = 1; i <= n; ++i){
            int nr; fin >> nr;
            if((ogl(nr)%10) % 2 == 0){
                max1 = max(max1, nr);
                min1 = min(min1, nr);
            }
        }
        fout << min1 << ' ' << max1;
    }
}
