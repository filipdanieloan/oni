#include <bits/stdc++.h>
using namespace std;

ifstream fin("mandatar.in");
ofstream fout("mandatar.out");

int c, a[100001], b[100001], n, d, cnt1, p, cop, nrmax2 = INT_MIN;
int maxfp = INT_MIN, fp;

int main(){
    fin >> c >> n;
    fill(b+1, b+n+1, 1);
    for(int i = 1; i <= n; ++i){
        fin >> a[i];
        if(c >= 2){
            fp = 0;
            cnt1 = 1;
            d = 2;
            cop = a[i];
            while(cop > 1){
                if(cop % d == 0){
                    b[i] *= d;
                    ++fp;
                }
                while(cop % d == 0)
                    cop /= d;
                ++d;
                if(d * d > cop)
                    d = cop;
            }
            if(fp > maxfp){
                maxfp = fp;
                nrmax2 = b[i];
            }
            else if(fp == maxfp){
                nrmax2 = max(nrmax2, b[i]);
            }
        }
    }
    sort(a+1, a+n+1);
    if(c == 1){
        for(int i = n; i >= 1; --i){
            cop = a[i];
            cnt1 = 1;
            d = 2;
            while(cop > 1){
                p = 0;
                while(cop % d == 0){
                    cop /= d;
                    ++p;
                }
                if(p)
                    cnt1 *= (p + 1);
                ++d;
                if(d * d > cop)
                    d = cop;
            }
            if(cnt1 == 2){
                fout << a[i];
                return 0;
            }
        }
    }
    else if(c == 2){
        fout << nrmax2;
        return 0;
    }
}
