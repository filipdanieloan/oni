#include <bits/stdc++.h>
using namespace std;

ifstream fin("optime.in");
ofstream fout("optime.out");

int p[100001], nrPrime[100001], nrp, k, t;
int a[401][201];

int main() {
    for(int i = 2; i <= 100000; i ++) {
        if(p[i] == 0) {
            nrPrime[++nrp] = i;
            for(int j = i + i; j <= 100000; j += i)
                p[j] = 1;
        }
    }
    cin >> t >> k;
    int c = 1, numarulCurent;
    for(int i = 1; i <= 2 * k; i ++) {
        for(int j = 1; j <= k; j ++) {
            do {
                numarulCurent = nrPrime[c++];
            } while(numarulCurent % 100 < 10);
            a[i][j] = numarulCurent % 100;
        }
    }
    for(int i = 1; i <= 2 * k; i ++) {
        for(int j = 1; j <= k; j ++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }


    return 0;
}
