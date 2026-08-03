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
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (n % 2 != 0)
    {
        cout << "NO\n";
        return;
    }

    int min_odd = 1e9;
    int max_even = -1e9;

    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            min_odd = min(min_odd, a[i]);
        }
        else
        {
            max_even = max(max_even, a[i]);
        }
    }

    if (max_even + 1 < min_odd)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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
