#include <bits/stdc++.h>
using namespace std;

ifstream fin("descmult.in");
ofstream fout("descmult.out");

int c, n, a, b, d[21], e[21], v[1000001], k;
long long nrdiv = 1;
bool luat[10000001]

int main() {
    fin >> c >> n >> a >> b;
    for (int i = 1; i <= n; ++i) {
        fin >> d[i];
    }
    for (int i = 1; i <= n; ++i) {
        fin >> e[i];
        if (c == 1)
            nrdiv *= (e[i]+1);
    }
    if (c == 1) fout << nrdiv;
}