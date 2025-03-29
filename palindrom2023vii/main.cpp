#include <bits/stdc++.h>
using namespace std;

ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

int c, n, cnt1, cifre_nevoie[50001], s;
char v[51];
bool ePalindrom[50001];

int main()
{
    fin >> c >> n;
    if(c == 2) fin >> s;
    for(int x = 1; x <= n; ++x)
    {
        fin >> v;
        if(c == 1)
        {
            int i;
            for(i = 0; i < strlen(v); ++i)
            {
                int st = i, dr = strlen(v)-1;
                while(v[st] == v[dr])
                {
                    ++st;
                    --dr;
                }
                if(st >= dr)
                    break;
            }
            cnt1 += i;
        }
        else
        {
            int i;
            for(int i = 0; i < strlen(v); ++i)
            {
                int st = i, dr = strlen(v)-1;
                while(v[st] == v[dr])
                {
                    ++st;
                    --dr;
                }
                if(st >= dr)
                    break;
            }
            if(i == 0)
                ePalindrom[x] = true;
            else
            {
                cifre_nevoie[x] = i;
            }
        }
    }
    if(c == 1)
    {
        fout << cnt1;
        return 0;
    }
    else
    {
        int secvMax = INT_MIN, secv, cop;
        for(int x = 1; x <= n; ++x){
            cop = s;
            if(cifre_nevoie <= s)
            {

            }
        }
    }
}
