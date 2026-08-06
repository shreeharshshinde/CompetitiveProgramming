#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

bool isFair(ll n)
{
    ll t = n;
    while (t > 0)
    {
        int digit = t % 10;
        if (digit != 0 && n % digit != 0)
            return false;
        t /= 10;
    }

    return true;
}

void solve()
{
    ll n;
    cin >> n;

    while (!isFair(n))
    {
        n++;
    }

    cout << n << "\n";
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
