// bineary search to find a number from unsorted array



#include <bits/stdc++.h>
using namespace std;

void solve(vector<pair<int, int>> a, int n, int c, int big, int mid, int end)
{

    if (a[mid].first == c)
    {
        cout << a[mid].second;
    }
    else if (big == end)
    {
        cout << -1;
    }
    else if (a[mid].first > c)
    {
        end = mid - 1;
        mid = (big + end) / 2;
        solve(a, n, c, big, mid, end);
    }
    else if (a[mid].first < c)
    {
        big = mid + 1;
        mid = (big + end) / 2;
        solve(a, n, c, big, mid, end);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int w;
        cin >> w;
        a.push_back(make_pair(w, i));
    }
    sort(a.begin(), a.end());
    int c;
    cin >> c;
    int big = 0,
        end = n - 1,
        mid = end / 2;
    solve(a, n, c, big, mid, end);

    return 0;
}