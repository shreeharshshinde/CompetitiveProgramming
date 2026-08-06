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
    ll x, y, k;
    cin >> x >> y >> k;

    ll need = k * y + (k - 1);

    ll stickTrades = (need + x - 2) / (x - 1);

    cout << stickTrades + k << "\n";
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
