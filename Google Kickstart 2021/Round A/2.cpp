// Question Link:
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <string.h>
#define mod 1000000007
using namespace std;
typedef long long int lli;

void solve(int t)
{
    //write your code here
    int r, c;
    cin >> r >> c;
    vector<vector<int>> grid(r, vector<int>(c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> grid[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int left = 0, right = 0, top = 0, bottom = 0;
            int x1 = i, x2 = i, x3 = j, x4 = j;
            if (grid[i][j] == 1)
            {
                while (x1 < r && grid[x1][j] == 1)
                {
                    bottom++;
                    x1++;
                }
                while (x2 >= 0 && grid[x2][j] == 1)
                {
                    top++;
                    x2--;
                }
                while (x3 < c && grid[i][x3] == 1)
                {
                    right++;
                    x3++;
                }
                while (x4 >= 0 && grid[i][x4] == 1)
                {
                    left++;
                    x4--;
                }
                if (min(top, left / 2) >= 2)
                    ans += max(0, min(top, left / 2) - 1);
                if (min(left, top / 2) >= 2)
                    ans += max(0, min(left, top / 2) - 1);
                if (min(top, right / 2) >= 2)
                    ans += max(0, min(top, right / 2) - 1);
                if (min(right, top / 2) >= 2)
                    ans += max(0, min(right, top / 2) - 1);
                if (min(bottom, left / 2) >= 2)
                    ans += max(0, min(bottom, left / 2) - 1);
                if (min(left, bottom / 2) >= 2)
                    ans += max(0, min(left, bottom / 2) - 1);
                if (min(bottom, right / 2) >= 2)
                    ans += max(0, min(bottom, right / 2) - 1);
                if (min(right, bottom / 2) >= 2)
                    ans += max(0, min(right, bottom / 2) - 1);
            }
        }
    }
    cout << "Case #" << t << ": " << ans << "\n";
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("A:/c++/inputf.in", "r", stdin);
    freopen("A:/c++/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    return 0;
}
