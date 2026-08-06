
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
    ll a, b;
    cin >> a >> b;

    ll large = max(a, b);
    ll small = min(a, b);

    if (large % small != 0)
    {
        cout << -1 << "\n";
        return;
    }

    ll ratio = large / small;

    if (__builtin_popcountll(ratio) != 1)
    {
        cout << -1 << "\n";
        return;
    }

    int k = 0;
    while (ratio > 1)
    {
        ratio /= 2;
        k++;
    }

    cout << (k + 2) / 3 << "\n";
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
