#include <iostream>
//#include <fstream>
#include <cmath>
#include <algorithm>
#include <limits.h>
using namespace std;

//ifstream cin("in.txt");
//ofstream cout("out.txt");

class x{
    public:
        int l, c;
};

int n, a[51][51];
int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN, max4 = INT_MIN;
x pozmax1, pozmax2, pozmax3, pozmax4;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
            if(i < j && i + j <= n)
            {
                if(max1 < a[i][j])
                {
                    max1 = a[i][j];
                    pozmax1.l = i;
                    pozmax1.c = j;
                }
                continue;
            }
            else if(i < j && i + j > n+1)
            {
                if(max2 < a[i][j])
                {
                    max2 = a[i][j];
                    pozmax2.l = i;
                    pozmax2.c = j;
                }
                continue;
            }
            else if(i > j && i + j > n+1)
            {
                if(max3 < a[i][j])
                {
                    max3 = a[i][j];
                    pozmax3.l = i;
                    pozmax3.c = j;
                }
                continue;
            }
            else if(i > j && i + j <= n)
            {
                if(max4 < a[i][j])
                {
                    max4 = a[i][j];
                    pozmax4.l = i;
                    pozmax4.c = j;
                }
                continue;
            }
        }
    }
    a[pozmax2.l][pozmax2.c] = max1;
    a[pozmax3.l][pozmax3.c] = max2;
    a[pozmax4.l][pozmax4.c] = max3;
    a[pozmax1.l][pozmax1.c] = max4;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
