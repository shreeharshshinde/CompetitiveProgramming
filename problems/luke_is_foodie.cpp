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
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    ll L = a[0] - x;
    ll R = a[0] + x;

    for (int i = 1; i < n; i++)
    {
        L = max(L, (ll)a[i] - x);
        R = min(R, (ll)a[i] + x);

        if (L > R)
        {
            ans++;
            L = a[i] - x;
            R = a[i] + x;
        }
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
