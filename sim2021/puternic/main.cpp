#include <bits/stdc++.h>
using namespace std;

ifstream fin("puternic.in");
ofstream fout("puternic.out");

int c, n, x[100001], cnt1;
bool nuEstePuternic[100001];

long long Putere(int A, int n)
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

int nrcf(int x)
{
    int numar_cifre = 0;
    while(x)
    {
        ++numar_cifre;
        x /= 10;
    }
    return numar_cifre;
}

unsigned long long lipire(int a, int b)
{
    unsigned long long lipit = a;
    lipit *= Putere(10, nrcf(b));
    lipit += b;
    return lipit;
}

int main()
{
    fin >> c >> n;
    cnt1 = n;
    for(int i = 1; i <= n; ++i)
    {
        fin >> x[i];
        int cop = x[i], p, d = 2;
        if(x[i] == 1)
        {
            nuEstePuternic[i] = true;
            continue;
        }
        while(cop > 1)
        {
            p = 0;
            if(cop % d == 0 && cop % (d*d) != 0)
            {
                --cnt1;
                nuEstePuternic[i] = true;
                break;
            }
            while(cop % d == 0)
            {
                cop /= d;
                ++p;
            }
            ++d;
            if(d * d > cop)
                d = cop;
        }
    }
    if(c == 1)
        fout << cnt1;
    else
    {
        for(int i = 1; i <= n; ++i)
        {
            if(nuEstePuternic[i] == false)
            {
                x[i] = -1;
            }
        }
        int k = 0, nou[100001] = {};
        for(int i = 1; i <= n; ++i)
        {
            if(x[i] >= 1)
            {
                nou[++k] = x[i];
            }
        }
        int st = 1, dr = k;
        bool exista = false;
        while(st < dr)
        {
            bool eOk = true;
            unsigned long long noulipit = lipire(nou[st], nou[dr]);
            unsigned long long cop = noulipit, d = 2;
            while(cop > 1)
            {
                if(cop % d == 0 && cop % (d*d) != 0)
                {
                    eOk = false;
                    break;
                }
                while(cop % d == 0)
                    cop /= d;
                ++d;
                if(d * d > cop)
                    d = cop;
            }
            if(eOk)
                fout << nou[st] << ' ' << nou[dr] << '\n';
            if(eOk)
                exista = true;
            ++st;
            --dr;
        }
        if(exista == false)
            fout << -1;
    }
}
