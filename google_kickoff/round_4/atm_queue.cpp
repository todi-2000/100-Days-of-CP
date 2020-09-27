// Question Link:
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <string.h>
#define mod 1000000007
using namespace std;
typedef long long int lli;

bool cmp(const vector<lli> &a, const vector<lli> &b)
{
    return a[1] < b[1];
}

void solve(int t)
{
    //write your code here
    lli n, x;
    cin >> n >> x;
    vector<lli> arr(n);
    vector<vector<lli>> Q;
    for (lli i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = ceil((double)arr[i] / x);
        Q.push_back({arr[i], i + 1});
    }
    sort(Q.begin(), Q.end());
    cout << "Case #";
    cout << t;
    cout << ": ";
    for (int i = 0; i < n; i++)
        cout << (lli)Q[i][1] << " ";
    cout << "\n";
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("A:/c++/inputf.in", "r", stdin);
    freopen ("A:/c++/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve(i + 1);
    }
    return 0;
}
