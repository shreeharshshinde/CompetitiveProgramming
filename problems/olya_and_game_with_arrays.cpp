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
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> a(m);
        for (int j = 0; j < m; j++)
            cin >> a[j];

        sort(all(a));
        v.push_back({a[0], a[1]});
    }

    sort(v.begin(), v.end(), [](auto &x, auto &y)
         { return x.second < y.second; });

    int firstSmallest = INT_MAX;
    for (auto [first, second] : v)
        firstSmallest = min(firstSmallest, first);

    long long ans = firstSmallest;

    for (int i = 1; i < n; i++)
        ans += v[i].second;

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
