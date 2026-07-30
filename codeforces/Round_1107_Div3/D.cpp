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

    vector<long long> a(n), b(n), diff(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        diff[i] = b[i] - a[i];
    }

    for (int i = n - 1; i > 0; i--)
        if (diff[i] < 0)
            diff[i - 1] += diff[i];

    string ans = (diff[0] >= 0) ? "YES" : "NO";
    cout << ans << endl;
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
