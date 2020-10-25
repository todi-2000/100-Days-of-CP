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
    int n;
    cin >> n;
    stack<char>s;
    vector<int>visited(n+1,0);
    vector<int>ans;
    for(int i=0;i<2*n;i++)
    {
        char ch;
        cin >> ch;
        if(ch=='+')
        {
            s.push(ch);continue;
        } 
        else
        {
            int val;
            cin >> val;
            if(s.size()>n-val && n!=1)
            {
                cout << "NO" << "\n";return;
            }
            if(s.size()!=0)
            {
                if(visited[val]==0)
                {
                    int j=n;
                    while(s.size()>1 && j>val)
                    {
                        if (visited[j] == 0)
                        {
                            visited[j] = 1;
                            ans.push_back(j);
                            s.pop();
                        }
                            j--;
                    }
                    ans.push_back(val);
                    visited[val]=1;s.pop();
                }
                else
                {
                    int j=n;
                    while (s.size() > 0 && j > val)
                    {
                        if (visited[j] == 0)
                        {
                            visited[j] = 1;
                            ans.push_back(j);
                            s.pop();
                        }
                        j--;
                    }
                } 
            }
        }
    }
    if(s.size()>0)
    {
        cout << "NO" << "\n";return;
    }
    cout << "YES"
         << "\n";
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << " ";
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
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




