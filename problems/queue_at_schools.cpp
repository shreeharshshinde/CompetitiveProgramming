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
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;

    while (x--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s << "\n";
}

int main()
{
    fast;

    solve();

    return 0;
}
