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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> d(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        d[i] = a[i + 1] - a[i];
    }

    int i = 0;
    while (i < n - 1)
    {
        int j = i;
        while (j < n - 1 && abs(d[j]) % 2 == abs(d[i]) % 2)
        {
            j++;
        }
        sort(d.begin() + i, d.begin() + j);
        i = j;
    }

    vector<ll> ans(n);
    ans[0] = a[0];
    for (int i = 0; i < n - 1; i++)
    {
        ans[i + 1] = ans[i] + d[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << ans[i] << " ";
    }
    cout << ans[n - 1] << "";
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
