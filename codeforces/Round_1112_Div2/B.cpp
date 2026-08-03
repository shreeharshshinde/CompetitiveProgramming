#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n, k;
    cin >> n >> k;

    // If k = n - 1, all characters must be the same.
    // This violates the |count(0) - count(1)| <= 1 condition for any n >= 2.
    if (k == n - 1)
    {
        cout << -1 << "\n";
        return;
    }

    int b = n - k;
    int c0 = (n + 1) / 2;
    int c1 = n / 2;

    int base0 = (b + 1) / 2;
    int base1 = b / 2;
    int rem0 = c0 - base0;
    int rem1 = c1 - base1;

    for (int i = 0; i < 1 + rem0; ++i)
    {
        cout << "0";
    }

    for (int i = 0; i < 1 + rem1; ++i)
    {
        cout << "1";
    }

    for (int i = 2; i < b; ++i)
    {
        if (i % 2 == 0)
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
    }

    cout << "\n";
}

int main()
{
    fast;

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }

    return 0;
}