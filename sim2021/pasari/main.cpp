#include <bits/stdc++.h>
using namespace std;

ifstream fin("pasari.in");
ofstream fout("pasari.out");

int c, n, a[1001][1001], l, cateApara[1001][1001], maxim1 = INT_MIN, coloana1, deCateEsteAparat[1001][1001], linie2, coloana2, maxim2 = INT_MIN;

int main()
{
    fin >> c >> n;
    if(c == 1) fin >> l;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            fin >> a[i][j];
        }
    }
    if(c == 1)
    {
        for(int j = 1; j <= n; ++j)
        {
            ++cateApara[l][j];
            //nord:
            if(l != 1)
            {
                for(int k = l-1; k >= 1; --k)
                {
                    if(a[k][j] > a[l][j])
                        break;
                    ++cateApara[l][j];
                }
            }
            //sud:
            if(l != n)
            {
                for(int k = l+1; k <= n; ++k)
                {
                    if(a[k][j] > a[l][j])
                        break;
                    ++cateApara[l][j];
                }
            }
            //est:
            if(j != n)
            {
                for(int k = j+1; k <= n; ++k)
                {
                    if(a[l][k] > a[l][j])
                        break;
                    ++cateApara[l][j];
                }
            }
            //vest:
            if(j != 1)
            {
                for(int k = j-1; k >= 1; --k)
                {
                    if(a[l][k] > a[l][j])
                        break;
                    ++cateApara[l][j];
                }
            }
            if(maxim1 < cateApara[l][j])
            {
                maxim1 = cateApara[l][j];
                coloana1 = j;
            }
        }
        fout << coloana1;
        return 0;
    }
    else
    {
        for(int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= n; ++j)
            {
                ++deCateEsteAparat[i][j];
                //nord:
                if(i != 1)
                {
                    for(int k = i-1; k >= 1; --k)
                    {
                        if(a[k][j] > a[i][j])
                            break;
                        ++deCateEsteAparat[k][j];
                    }
                }
                //sud:
                if(i != n)
                {
                    for(int k = i+1; k <= n; ++k)
                    {
                        if(a[k][j] > a[i][j])
                            break;
                        ++deCateEsteAparat[k][j];
                    }
                }
                //est:
                if(j != n)
                {
                    for(int k = j+1; k <= n; ++k)
                    {
                        if(a[i][k] > a[i][j])
                            break;
                        ++deCateEsteAparat[i][k];
                    }
                }
                //vest:
                if(j != 1)
                {
                    for(int k = j-1; k >= 1; --k)
                    {
                        if(a[i][k] > a[i][j])
                            break;
                        ++deCateEsteAparat[i][k];
                    }
                }
            }
        }
        for(int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= n; ++j)
            {
                if(deCateEsteAparat[i][j] > maxim2)
                {
                    linie2 = i;
                    coloana2 = j;
                    maxim2 = deCateEsteAparat[i][j];
                }
            }
        }
        fout << linie2 << ' ' << coloana2;
        return 0;
    }
}
