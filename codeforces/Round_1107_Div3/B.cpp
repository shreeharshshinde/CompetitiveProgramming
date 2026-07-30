#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

bool is_good(long long v)
{
    set<int> digits;
    while (v > 0)
    {
        digits.insert(v % 10);
        v /= 10;
        if (digits.size() > 2)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    long long x;
    cin >> x;
    long long y = 2;

    while (true)
    {
        if (is_good(y) && is_good(x * y))
        {
            cout << y << "\n";
            return;
        }
        y++;
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
