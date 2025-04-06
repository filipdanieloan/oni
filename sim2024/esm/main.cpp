#include <bits/stdc++.h>
using namespace std;

ifstream fin("esm.in");
ofstream fout("esm.out");

int c, n, a[100001];

int main(){
    fin >> c >> n;
    for(int i = 1; i <= n; ++i){
        fin >> a[i];
    }
    if(c == 1){
        int cnt = 0;
        for(int i = 1; i < n-1; ++i){
            if(a[i] * a[i+1] == a[i+2])
                ++cnt;
        }
        fout << cnt;
        return 0;
    }
    else if(c == 2){
        bool ok = false;
        for(int i = n-2; i >= 1; --i){
            for(int j = i+1; j < n; ++j){
                if(a[i] * a[j] == a[n]){
                    fout << i;
                    ok = true;
                }
                if(ok) break;
            }
            if(ok) break;
        }
        return 0;
    }
    else{
        int cnt = 0;
        for(int ult = n; ult >= 3; --ult){
            bool ok = false;
            for(int i = ult-2; i; --i){
                for(int j = i+1; j < ult; ++j){
                    if(a[i]*a[j] == a[ult]){
                        cnt+=i;
                        ok = true;
                        break;
                    }
                }
                if(ok) break;
            }
        }
        fout << cnt;
        return 0;
    }
}
