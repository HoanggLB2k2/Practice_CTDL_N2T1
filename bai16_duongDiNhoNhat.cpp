#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1005][1005], b[1005][1005];
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (i == 1)
                    b[i][j] = b[i][j - 1];
                else if (j == 1)
                    b[i][j] = b[i - 1][j];
                else
                    b[i][j] = min(b[i - 1][j - 1], min(b[i - 1][j], b[i][j - 1]));
                b[i][j] += a[i][j];
            }
        }
        cout << b[n][m] << endl;
        for(int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                b[i][j] = 0;
            }
        }
    }
    return 0;
}