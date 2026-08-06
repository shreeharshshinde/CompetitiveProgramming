#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

int prefixXor(int n)
{
    switch (n % 4)
    {
    case 0:
        return n;
    case 1:
        return 1;
    case 2:
        return n + 1;
    case 3:
        return 0;
    }
}

void solve()
{
    int a, b;
    cin >> a >> b;

    int x = prefixXor(a - 1);

    int c = x ^ b;

    int ans;
    if (c == 0)
        ans = a;
    else if (c == a)
        ans = a + 2;
    else
        ans = a + 1;

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
