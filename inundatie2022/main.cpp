#include <bits/stdc++.h>
using namespace std;

ifstream fin("inundatie.in");
ofstream fout("inundatie.out");

class teodohr{
    public:
        int start, stop;
};

short c, coloana[100001], max1 = SHRT_MIN, min1 = SHRT_MAX;
int n, p, s;
teodohr misto;

int main(){
    fin >> c >> n >> p >> s;
    for(int i = 1; i <= n; ++i){
        fin >> coloana[i];
        if(c == 1){
            max1 = max(max1, coloana[i]);
            min1 = min(min1, coloana[i]);
        }
        if(c == 2){
            if(i == 1){
                misto.start = i;
                continue;
            }
        }
    }
    if(c == 1){
        fout << max1 - min1;
        return 0;
    }
    
}
