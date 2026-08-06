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
    int a, b;
    cin >> a >> b;
    if (a < b)
    {
        cout << 1 << "\n";
        return;
    }

    int ans = INT_MAX;
    for (int i = 0; i <= 30; i++)
    {
        if (b + i == 1)
            continue;
        int temp = a;
        int curr = i;
        int base = b + i;

        while (temp > 0)
        {
            temp /= base;
            curr++;
        }

        ans = min(ans, curr);
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
