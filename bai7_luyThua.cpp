#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

ll binPow(ll n, ll k)
{
    if (k == 0)
        return 1;
    ll a = n % MOD;
    ll X = binPow(a, k / 2) % MOD;
    if (k % 2 == 0)
    {
        return (X * X) % MOD;
    }
    else
    {
        return ((n * X) % MOD * X) % MOD;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << binPow(n, k) << endl;
    }
    return 0;
}
