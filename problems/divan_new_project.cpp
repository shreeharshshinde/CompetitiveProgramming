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
    int n;
    cin >> n;

    vector<int> a(n);
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v[i] = {a[i], i + 1};
    }

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    vector<ll> pos(n + 1);
    pos[0] = 0;

    ll ans = 0;
    int dist = 1;

    for (int i = 0; i < n; i++)
    {
        auto [visits, idx] = v[i];

        if (i % 2 == 0)
            pos[idx] = -dist;
        else
        {
            pos[idx] = dist;
            dist++;
        }

        ans += 2LL * visits * abs(pos[idx]);
    }

    cout << ans << "\n";

    for (int i = 0; i <= n; i++)
    {
        cout << pos[i] << " ";
    }
    cout << "\n";
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
