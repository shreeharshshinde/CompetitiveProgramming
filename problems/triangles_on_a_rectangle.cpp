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
    int w, h;
    cin >> w >> h;

    ll ans = 0;

    for (int side = 0; side < 2; side++)
    {
        int k;
        cin >> k;
        vector<ll> x(k);

        for (int i = 0; i < k; i++)
            cin >> x[i];

        ans = max(ans, (x.back() - x.front()) * 1LL * h);
    }

    for (int side = 0; side < 2; side++)
    {
        int k;
        cin >> k;
        vector<ll> y(k);

        for (int i = 0; i < k; i++)
            cin >> y[i];

        ans = max(ans, (y.back() - y.front()) * 1LL * w);
    }

    cout << ans << "\n";
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
