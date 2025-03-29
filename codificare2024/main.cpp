#include <bits/stdc++.h>
using namespace std;

ifstream fin("codificare.in");
ofstream fout("codificare.out");

int c, n, v[1000000], min1 = INT_MAX, max1 = INT_MIN;

long long Putere(int A, int N)
{
    long long P = 1;
    while(n)
    {
        if(n % 2 == 1)
            P *= A;
        A *= A;
        n /= 2;
    }
    return P;
}

int ogl(int x)
{
    int oglindit = 0;
    while(x)
    {
        oglindit *= 10;
        oglindit += (x%10);
        x /= 10;
    }
    return oglindit;
}

int nrcf(int y)
{
    int numar_cifre = 0;
    while(y)
    {
        ++numar_cifre;
        y /= 10;
    }
    return numar_cifre;
}

double codificare(int a)
{
    int cuCatInmultesc = nrcf(a);
    double codificat = a;
    if(ogl(a) % 10 == 1)
        cuCatInmultesc--;
    while(codificat > 1)
    {
        int modulo = fmod(codificat, 10);
        if(modulo % 2 == 0)
        {
            ++codificat;
        }
        else
        {
            --codificat;
        }
        codificat /= 10;
    }
    codificat *= Putere(10, cuCatInmultesc);
    return codificat;
}

int main()
{
    fin >> c >> n;
    for(int i = 1; i <= n; ++i)
    {
        fin >> v[i];
        if(codificare(v[i]) > v[i] && c == 1)
        {
            min1 = min(min1, v[i]);
            max1 = max(max1, v[i]);
        }
    }
    if(c == 1)
        fout << min1 << ' ' << max1;
}
