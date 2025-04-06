//#include <iostream>
#include <fstream>
using namespace std;

ifstream cin("in.txt");
ofstream cout("out.txt");

int n, z, sum, a[2001][2001];

int main()
{
    cin >> n >> z;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
            if(z == 1)
            {
                if(i < j && i + j <= n && i + j != n + 1)
                    sum += a[i][j];
                continue;
            }
            else if(z == 2)
            {
                if(i < j && i + j > n && i + j != n + 1)
                    sum += a[i][j];
                continue;
            }
            else if(z == 3)
            {
                if(i > j && i + j > n && i + j != n + 1)
                    sum += a[i][j];
                continue;
            }
            else if(z == 4)
            {
                if(i > j && i + j <= n && i + j != n + 1)
                    sum += a[i][j];
                continue;
            }
        }
    }
    cout << sum;
}
