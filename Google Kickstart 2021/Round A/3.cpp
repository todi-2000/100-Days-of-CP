// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

vector<vector<bool>> visited(10000, vector<bool>(100000));
vector<int> findMax(vector<vector<lli>>mat, int r, int c)
{

    // Initializing max element as INT_MIN
    int maxElement = INT_MIN;
    int x=-1,y=-1;
    // checking each element of matrix
    // if it is greater than maxElement,
    // update maxElement
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] > maxElement && visited[i][j]==false)
            {
                maxElement = mat[i][j];
                x=i; y=j;
            }
        }
    }
    // finally return position of maxElement
    return {x,y};
}

void solve(int t)
{
    //write your code here
    int r,c;
    cin >> r >> c;
    vector<vector<lli>>arr(r,vector<lli>(c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            visited[i][j]=0;
    }
    int ans=0;
    while(1)
    {
        vector<int> pos = findMax(arr, r, c);
        int x = pos[0], y = pos[1];
        if (x==-1 && y==-1)
            break;
        else
        {
            if (x - 1 >= 0 && arr[x - 1][y] != -1 && arr[x][y] - arr[x - 1][y]>1)
            {
                ans += (arr[x][y]-arr[x-1][y]-1);
                arr[x-1][y] = arr[x][y]-1;
            }
            if (x + 1 < r && arr[x + 1][y] != -1 && arr[x][y] - arr[x + 1][y]>1)
            {
                ans += (arr[x][y] - arr[x + 1][y] - 1);
                arr[x + 1][y] = arr[x][y] - 1;
            }
            if (y - 1 >= 0 && arr[x][y - 1] != -1 && arr[x][y] - arr[x][y - 1]>1)
            {
                ans += (arr[x][y] - arr[x][y-1] - 1);
                arr[x][y-1] = arr[x][y] - 1;
            }
            if (y + 1 < c && arr[x][y + 1] != -1 && arr[x][y] - arr[x][y + 1]>1)
            {
                ans += (arr[x][y] - arr[x][y+1] - 1);
                arr[x][y+1] = arr[x][y] - 1;
            }
            visited[x][y]=1;
        }
    }
    cout << "Case #" << t << ": " << ans << "\n";
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
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    return 0;
}




