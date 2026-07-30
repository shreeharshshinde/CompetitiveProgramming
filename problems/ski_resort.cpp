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
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> a(n);
    int len = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= q)
        {
            len++;
        }
        else
        {
            if (len >= k)
            {
                long long t = len - k + 1;
                ans += t * (t + 1) / 2;
            }
            len = 0;
        }
    }

    if (len >= k)
    {
        long long t = len - k + 1;
        ans += t * (t + 1) / 2;
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
