#include <bits/stdc++.h>
using namespace std;

ifstream fin("faleza.in");
ofstream fout("faleza.out");

int n, jMin = INT_MAX, iMin, deInlocuit, celalaltI;
bool a[100001][3];

int opunere(int a) {
    if (a == 1) return 2;
    return 1;
}

int main() {
    fin >> n;
    int numarulDeZerouri[] = {0, n, n};
    for (int i = 1; i <= 2; ++i) {
        for (int j = 1; j <= n; ++j) {
            fin >> a[i][j];
            if (a[i][j]) --numarulDeZerouri[i];
            if (a[i][j] && jMin > j) {
                iMin = i;
                celalaltI = opunere(i);
                jMin = j;
            }
        }
    }
    deInlocuit += jMin;
    --deInlocuit;
    while (a[iMin][jMin]) ++jMin;
    for (int j = jMin; a[iMin][j] != 0; ++j) {
        if (a[iMin][j] && a[celalaltI][j-1]) {

        }
    }
}