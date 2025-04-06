#include <iostream>
//#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;

//ifstream cin("in.txt");
//ofstream cout("out.txt");

int n, s[5];
int a[1001][1001];

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
            if(i < j && i+j <= n && i+j != n+1)
            {
                s[1] += a[i][j];
                continue;
            }
            else if(i < j && i+j > n && i+j != n+1)
            {
                s[2] += a[i][j];
                continue;
            }
            else if(i > j && i+j > n && i+j != n+1)
            {
                s[3] += a[i][j];
                continue;
            }
            else if(i > j && i+j <= n && i+j != n+1)
            {
                s[4] += a[i][j];
                continue;
            }
        }
    }
    sort(s+1, s+5);
    cout << s[1] << ' ' << s[2] << ' ' << s[3] << ' ' << s[4];
}
