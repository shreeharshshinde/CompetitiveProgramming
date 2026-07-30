#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<pii> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({b[i], a[i]});
    }

    sort(all(v));

    ll ans = p;
    int informed = 1;

    for (auto [cost, people] : v)
    {
        if (informed == n)
            break;
        if (cost >= p)
            break;

        int use = min(people, n - informed);
        ans += 1LL * use * cost;
        informed += use;
    }

    ans += 1LL * (n - informed) * p;
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
