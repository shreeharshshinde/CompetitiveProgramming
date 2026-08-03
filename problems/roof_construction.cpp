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

    int p = 1;
    while ((p << 1) < n)
        p <<= 1;

    for (int i = 1; i < p; i++)
        cout << i << " ";

    cout << 0 << " ";

    for (int i = p; i < n; i++)
        cout << i << " ";

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
