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

    int c0 = 0;
    int c1 = 0;
    for (char c : s)
    {
        if (c == '1')
            c1++;
        else
            c0++;
    }

    if (abs(c1 - c0) > 2)
    {
        cout << -1 << "\n";
        return;
    }

    int a0 = 0, a1 = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            if (s[i] == '0')
                a0++;
            else
                a1++;
        }
    }

    if (a1 == a0)
        cout << 2 * a0 << "\n";
    else
        cout << 2 * max(a0, a1) - 1 << "\n";
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
