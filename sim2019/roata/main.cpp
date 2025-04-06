#include <bits/stdc++.h>
using namespace std;

ifstream fin("roata.in");
ofstream fout("roata.out");

int n, v[50001], ceEsteAici[50001], k = 1;
bool toateSunt0 = false;

int main() {
    fin >> n;
    for (int i = 1; i <= n; ++i) {
        fin >> v[i];
    }
    while (toateSunt0 == false) {
        for (int i = 1; i <= n; ++i) {
            if (v[i] == k) {
                int catSeMisca = n-i+1;
                for (int j = 1; j <= n; ++j) {
                    if (j + catSeMisca > n) {

                    }
                }
            }
        }
    }

}