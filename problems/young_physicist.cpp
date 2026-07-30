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
    int sum_x = 0, sum_y = 0, sum_z = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];
        sum_x += a[0];
        sum_y += a[1];
        sum_z += a[2];
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}
