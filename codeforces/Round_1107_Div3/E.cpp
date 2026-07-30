#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Write your solution here.

    ll ans = 0;

    cout << ans << '\n';
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