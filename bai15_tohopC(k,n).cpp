#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
int a[1005][1005];
// main
int main(int argc, char const *argv[])
{
    /*code*/
    a[0][0] = 1;
    for (int i = 1; i < 1005; i++)
    {
        a[i][0] = 1;
        for (int j = 1; j < 1005; j++)
        {
            a[i][j] = (a[i - 1][j - 1] % MOD + a[i - 1][j] % MOD) % MOD;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << a[n][k] << endl;
    }
    return 0;
}