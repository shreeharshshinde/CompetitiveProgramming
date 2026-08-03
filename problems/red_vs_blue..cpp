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
    int n, r, b;
    cin >> n >> r >> b;

    int gaps = b + 1;
    int quo = r / gaps;
    string a;
    for (int i = 0; i < quo; i++)
        a.push_back('R');
    int rem = r % gaps;

    string s = "";
    for (int i = 0; i < gaps - 1; i++)
    {
        if (rem == 0)
        {
            s += a;
        }
        else
        {
            s += a;
            s.push_back('R');
            rem--;
        }
        s.push_back('B');
    }

    s += a;

    cout << s << '\n';
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
