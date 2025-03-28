#include <bits/stdc++.h>
using namespace std;

int n, v[100001], sume_partiale[100001], m, a, b, sumMax = INT_MIN;

int main(){
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> v[i];
        sume_partiale[i] = sume_partiale[i-1] + v[i];
    }
    cin >> m;
    for(int i = 1; i <= m; ++i){
        cin >> a >> b;
        if(a > b){
            swap(a, b);
        }
        int sumPart = sume_partiale[b] - sume_partiale[a-1];
        sumMax = max(sumPart, sumMax);
    }
    cout << sumMax;
}
