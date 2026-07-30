#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve()
{
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    ll extra = s - b * k;
    if (extra < 0 || extra > 1LL * n * (k - 1))
    {
        cout << -1 << "\n";
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << 0 << " ";
    }
    cout << extra + b * k << "\n";
}

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
