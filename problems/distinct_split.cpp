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
    string s;
    cin >> s;

    vector<int> left(n);
    vector<int> vis(26, 0);

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (!vis[s[i] - 'a'])
        {
            vis[s[i] - 'a'] = 1;
            cnt++;
        }

        left[i] = cnt;
    }

    vector<int> right(n);
    vis.assign(26, 0);
    cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!vis[s[i] - 'a'])
        {
            vis[s[i] - 'a'] = 1;
            cnt++;
        }

        right[i] = cnt;
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, left[i] + right[i + 1]);
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
