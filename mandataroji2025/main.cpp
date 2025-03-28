#include <bits/stdc++.h>
using namespace std;

ifstream fin("mandatar.in");
ofstream fout("mandatar.out");

int c, a[100001], b[100001], n, d, cnt1, p, cop;

int main(){
    fin >> c >> n;
    for(int i = 1; i <= n; ++i){
        fin >> a[i];
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
}
