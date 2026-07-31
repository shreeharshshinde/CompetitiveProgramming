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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0;
    vector<int> b(n);
    while (i < n)
    {
        int j = i;
        while (j < n && a[j] == a[i])
        {
            j++;
        }

        int len = j - i;
        if (len == 1)
        {
            cout << -1 << "\n";
            return;
        }
        else
        {
            for (int k = i; k < j - 1; k++)
            {
                b[k] = k + 2;
            }
            b[j - 1] = i + 1;
        }

        i = j;
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
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
