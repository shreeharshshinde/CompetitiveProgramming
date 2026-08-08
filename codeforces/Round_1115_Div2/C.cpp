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
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int best_ans = m;
    vector<int> res;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            res.push_back(matrix[i][j]);
        }

        sort(all(res), greater<int>());

        if (res.size() > best_ans)
        {
            res.resize(best_ans);
        }

        ll sum = 0;
        int count = 0;
        for (int block : res)
        {
            sum += block;
            count++;

            if (sum >= v[i])
            {
                best_ans = min(best_ans, count);
                break;
            }
        }

        if (res.size() > best_ans)
        {
            res.resize(best_ans);
        }
    }

    cout << best_ans << "\n";
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
