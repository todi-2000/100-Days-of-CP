// Question: Given an array, update the range of array by adding value or
//find the sum of elements of array in given range.
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <string.h>
#define mod 1000000007
using namespace std;
typedef long long int lli;

vector<long long int> st(500005, 0);
vector<lli> lazy_tree(500005, 0);
vector<lli> arr(100001);

void buildTree(lli si, lli ss, lli se)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return;
    }
    lli mid = (ss + se) / 2;
    buildTree(2 * si + 1, ss, mid);
    buildTree(2 * si + 2, mid + 1, se);
    st[si] = st[2 * si + 1] + st[2 * si + 2];
}

void update(lli si, lli ss, lli se, lli qs, lli qe, lli val)
{
    if (lazy_tree[si] != 0)
    {
        lli x = lazy_tree[si];
        lazy_tree[si] = 0;
        if (ss != se)
        {
            lazy_tree[2 * si + 1] += x;
            lazy_tree[2 * si + 2] += x;
        }
        st[si] += (se - ss + 1) * x;
    }
    if (qs > se || qe < ss)
        return;
    if (qs <= ss && qe >= se)
    {
        st[si] += (se - ss + 1) * val;
        if (ss != se)
        {
            lazy_tree[2 * si + 1] += val;
            lazy_tree[2 * si + 2] += val;
        }
        return;
    }
    lli mid = (ss + se) / 2;
    update(2 * si + 1, ss, mid, qs, qe, val);
    update(2 * si + 2, mid + 1, se, qs, qe, val);
    st[si] = st[2 * si + 1] + st[2 * si + 2];
}

lli query(lli si, lli ss, lli se, lli qs, lli qe)
{
    if (lazy_tree[si] != 0)
    {
        lli val = lazy_tree[si];
        lazy_tree[si] = 0;
        st[si] += (se - ss + 1) * val;
        if (ss != se)
        {
            lazy_tree[2 * si + 1] += val;
            lazy_tree[2 * si + 2] += val;
        }
    }
    if (qs > se || qe < ss)
        return 0;
    if (qs <= ss && qe >= se)
        return st[si];
    lli mid = (ss + se) / 2;
    lli l = query(2 * si + 1, ss, mid, qs, qe);
    lli r = query(2 * si + 2, mid + 1, se, qs, qe);
    return l + r;
}

void solve()
{
    //write your code here
    lli n;
    cin >> n;
    for (lli i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    buildTree(0, 0, n - 1);
    // for (lli i = 0; i < 14; i++)
    //     cout << st[i] << " ";
    // cout << "\n";
    lli q;
    cin >> q;
    for (lli i = 0; i < q; i++)
    {
        lli x, y, z;
        cin >> x >> y >> z;
        if (x == 0)
        {
            lli val;
            cin >> val;
            update(0, 0, n - 1, y - 1, z - 1, val);
        }
        else if (x == 1)
        {
            cout << query(0, 0, n - 1, y - 1, z - 1) << "\n";
        }
    }
}

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen ("A:/c++/inputf.in", "r", stdin);
    // freopen ("A:/c++/outputf.in", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while(t--)
    // {
    solve();
    // }
    return 0;
}
