// pattern
// khazana
// string and array manipulation

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int pos;
    cin >> pos;
    cin >> k;
    vector<pair<int, int>> l, r;

    for (int i = pos + 1; i < n; i++)
        if (a[i] != 0)
            r.push_back({i, a[i]});

    for (int i = pos - 1; i >= 0; i--)
        if (a[i] != 0)
            l.push_back({i, a[i]});

    int i = 0, j = 0, s = 0, f = 0;
    vector<int> ans;
    while (s < k)
    {
        cout << s;
        if (f & 1)
        {
            s += l[i].second;
            ans.push_back(l[i].first);
            i++;
        }
        else
        {
            s += r[j].second;
            ans.push_back(r[j].first);
            j++;
        }
        f = 1 - f;
    }
    cout << s << endl;
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
    return 0;
}