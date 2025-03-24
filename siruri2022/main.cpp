#include <bits/stdc++.h>
using namespace std;

ifstream fin("siruri.in");
ofstream fout("siruri.out");

int c, n, cnt1 = 0;
long long a[100001];
bool exista1[10];

long long Putere(int A , int n)
{
    int P = 1;
    while(n)
    {
        if(n % 2 == 1)
            P = P * A;
        A = A * A;
        n /= 2;
    }
    return P;
}

bool seTransforma(int x){
    fill(exista1, exista1 + 10, 0);
    while(x){
        if(exista1[x%10] == true)
            return true;
        exista1[x%10] = true;
        x /= 10;
    }
    return false;
}

int ogl(int neogl){
    int oglindit = 0;
    while(neogl){
        oglindit *= 10;
        oglindit += neogl%10;
        neogl /= 10;
    }
    return oglindit;
}

int nrcf(int nenumarat){
    int numar_cifre = 0;
    while(nenumarat){
        ++numar_cifre;
        nenumarat /= 10;
    }
    return numar_cifre;
}

long long unire(long long uni1, int uni2){
    uni1 *= pow(10, nrcf(uni2));
    uni1 += uni2;
    return uni1;
}

int transformare(long long preaLung){
    fill(exista1, exista1 + 10, false);
    preaLung = ogl(preaLung);
    int numarare = nrcf(preaLung);
    for(int k = 1; k <= numarare; ++k){
        if(exista1[preaLung%10] == 0){
            exista1[preaLung%10] = true;
        }
        //partea grea
        else{
            int temp = preaLung % (Putere(10, k));
            preaLung -= temp;
            preaLung /= 10;
            preaLung += (temp % (Putere(10, k-1)));
        }
    }
    return ogl(preaLung);
}

int main(){
    fin >> c >> n;
    for(int i = 1; i <= n; ++i){
        fin >> a[i];
        if(c == 1)
            if(seTransforma(a[i]) == false)
                ++cnt1;
    }
    if(c == 1){
        fout << cnt1;
        return 0;
    }
}
