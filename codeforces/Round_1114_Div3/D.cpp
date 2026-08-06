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

    string a;
    cin >> a;

    string b;
    cin >> b;

    vector<int> posA_even, posA_odd, posB_even, posB_odd;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            if (i % 2 == 0)
                posA_even.push_back(i);
            else
                posA_odd.push_back(i);
        }
        if (b[i] == '1')
        {
            if (i % 2 == 0)
                posB_even.push_back(i);
            else
                posB_odd.push_back(i);
        }
    }

    if (posA_even.size() != posB_even.size() || posA_odd.size() != posB_odd.size())
    {
        cout << -1 << "\n";
        return;
    }

    ll min_operations = 0;
    for (int i = 0; i < posA_even.size(); i++)
    {
        min_operations += abs(posA_even[i] - posB_even[i]) / 2;
    }

    for (int i = 0; i < posA_odd.size(); i++)
    {
        min_operations += abs(posA_odd[i] - posB_odd[i]) / 2;
    }

    cout << min_operations << "\n";
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
