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

    vector<int> suffixMin(n);
    suffixMin[n - 1] = n - 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] < s[suffixMin[i + 1]])
        {
            suffixMin[i] = i;
        }
        else if (s[i] == s[suffixMin[i + 1]])
        {
            suffixMin[i] = suffixMin[i + 1];
        }
        else
        {
            suffixMin[i] = suffixMin[i + 1];
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[suffixMin[i + 1]])
        {
            cout << "YES\n";
            cout << i + 1 << " " << suffixMin[i + 1] + 1 << "\n";
            return;
        }
    }

    cout << "NO\n";
}

int main()
{
    fast;

    solve();

    return 0;
}
