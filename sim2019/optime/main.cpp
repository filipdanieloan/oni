//#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;

ifstream cin("optime.in");
ofstream cout("optime.out");

int c, k, x, ciur[7000001], prim[7000001], a[401][201];
bool ePrim[100];

void eratostene()
{
    for(int i = 1; i <= 7000001; ++i)
    {
        for(int j = i; j <= 7000001; ++i)
        {
            ++ciur[j];
        }
    }
    int contor = 0;
    for(int i = 1; i <= 7000001; ++i)
    {
        if(ciur[i] == 2 && i > 10)
        {
            prim[++contor] = i;
            ePrim[i] = true;
        }
        else if(ciur[i] == 2 && i < 10)
            ePrim[i] = true;
    }
}

void creareSir(int CA)
{
    int kontor = 0;
    for(int i = 1; i <= 2*CA; ++i)
    {
        for(int j = 1; j <= CA; ++j)
        {
            ++kontor;
            while(prim[kontor] % 100 < 10)
                ++kontor;
            a[i][j] = prim[kontor] % 100;
        }
    }
}

void cerinta1(int C)
{
    int s = 0;
    for(int i = 1; i <= 2*C; ++i)
    {
        for(int j = 1; j <= C; ++j)
        {
            if(ePrim[a[i][j]] == false)
                s += a[i][j];
            cout << a[i][j] << ' ';
        }
    }
    cout << s;
}

int main()
{
    cin >> c >> k;
    eratostene(); creareSir(k);
    if(c == 2) cin >> x;
    if(c == 1)
        cerinta1(k);
}
