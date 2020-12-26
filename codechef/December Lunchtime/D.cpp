// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

void solve()
{
    //write your code here
    lli n,m;
    cin >> n >> m;
    vector<vector<lli>>mat(n,vector<lli>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin >> mat[i][j];
    }
    vector<lli>arr(n+m-3,1);
    lli a=n-1;
    for(int i=0;i<n-1;i++)
    {
        lli x=0;
        for(int j=i;j<n-1 && x<m-1;j++)
        {
            if(mat[j][x]!=mat[j+1][x+1])
            {
                arr[i]=0;
                break;
            }
            x++;
        }
    }
    for (int i = 1; i < m - 1; i++)
    {
        lli x = i;
        for (int j = i; j < n - 1 && x < m - 1; j++)
        {
            if (mat[j][x] != mat[j + 1][x + 1])
            {
                arr[a] = 0;
                break;
            }
            x++;
        }
        a++;
    }
    lli q;cin >> q;
    for(int i=0;i<q;i++)
    {
        lli x,y,v;
        cin >> x >> y >> v;
        x--;y--;
        if((x==0&&y==m-1)||(y==0&&x==n-1))
        {
            mat[x][y]=v;
        }
        else if(x>=y)
        {
            lli d=x-y;
            if(arr[d]==1 && mat[x][y]!=v)
            {
                mat[x][y]=v;
                arr[d]=0;
            }
            else if (arr[d] == 0 && mat[x][y] != v)
            {
                mat[x][y]=v;
                lli k=0,flag=0;
                for(int j=d;j<n-1&&k<m-1;j++)
                {
                    if(mat[j][k]!=mat[j+1][k+1])
                    {
                        arr[d]=0;
                        flag=1;
                        break;
                    }
                    k++;
                }
                if(flag==0)
                arr[d]=1;
            }
        }
        else if (x < y )
        {
            lli d=(n-2)+(y-x);
            if (arr[d] == 1 && mat[x][y] != v)
            {
                mat[x][y] = v;
                arr[d] = 0;
            }
            else if (arr[d] == 0 && mat[x][y] != v)
            {
                mat[x][y] = v;
                lli k = (y-x), flag = 0;
                for (int j = 0; j < n - 1 && k < m - 1; j++)
                {
                    if (mat[j][k] != mat[j + 1][k + 1])
                    {
                        arr[d] = 0;
                        flag = 1;
                        break;
                    }
                    k++;
                }
                if (flag == 0)
                    arr[d] = 1;
            }
        }
        lli flag=0;
        for(int i=0;i<n+m-3;i++)
        {
            if(arr[i]==0)
            {
                cout << "No" << "\n";
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout << "Yes" << "\n";
    }
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
    while(t--)
    {
        solve();
    }
    return 0;
}




