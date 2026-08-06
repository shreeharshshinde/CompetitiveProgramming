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

    stack<int> st;

    int ans = 0;

    for (char c : s)
    {
        if (c == '(')
        {
            st.push(c);
        }
        else
        {
            if (!st.empty())
            {
                st.pop();
            }
            else
            {
                ans++;
            }
        }
    }

    cout << ans << "\n";
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
