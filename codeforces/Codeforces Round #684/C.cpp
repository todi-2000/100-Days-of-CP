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
    int r,c;
    cin >> r >> c;
    vector<string>arr(r);
    vector<vector<int>>ans;
    for(int i=0;i<r;i++)
    cin >> arr[i];
    for(int i=0;i<r-1;i++)
    {
        for(int j=0;j<c-1;j++)
        {
            vector<int> rc;
            vector<int> rc0;
            int count1=0;
            if(arr[i][j]=='1'){
                rc.push_back(i+1);rc.push_back(j+1);count1++;}
            else
            {
                rc0.push_back(i + 1);
                rc0.push_back(j + 1);
            }
            if (arr[i+1][j]=='1')
            {
                rc.push_back(i+1+1);
                rc.push_back(j+1);
                count1++;
            }
            else
            {
                rc0.push_back(i + 2);
                rc0.push_back(j + 1);
            }
            if (arr[i][j + 1] == '1')
            {
                rc.push_back(i+1);
                rc.push_back(j+2);
                count1++;
            }
            else
            {
                rc0.push_back(i + 1);
                rc0.push_back(j + 2);
            }
            if (arr[i + 1][j + 1] == '1')
            {
                rc.push_back(i+2);
                rc.push_back(j+2);
                count1++;
            }
            else
            {
                rc0.push_back(i + 2);
                rc0.push_back(j + 2);
            }
            if(count1==0) continue;
            else if(count1==3)
            {
                ans.push_back(rc);
            }
            else if(count1==2)
            {
                vector<int>rl;
                for(int i=0;i<rc0.size();i++)
                rl.push_back(rc0[i]);
                rl.push_back(rc[0]);
                rl.push_back(rc[1]);
                ans.push_back(rl);
                rl[4]=rc[2];
                rl[5]=rc[3];
                ans.push_back(rl);
            }
            else if(count1==1)
            {
                vector<int>rl;
                rl.push_back(rc0[0]);
                rl.push_back(rc0[1]);
                rl.push_back(rc0[2]);
                rl.push_back(rc0[3]);
                rl.push_back(rc[0]);
                rl.push_back(rc[1]);
                ans.push_back(rl);
                rl[2]=rc0[4];
                rl[3] = rc0[5];
                rl[4] = rc[0];
                rl[5] = rc[1];
                ans.push_back(rl);
                rl[0] = rc0[2];
                rl[1] = rc0[3];
                rl[2] = rc0[4];
                rl[3] = rc0[5];
                ans.push_back(rl);
            }
            else if(count1==4)
            {
                vector<int> rl;
                rl.push_back(rc[0]);
                rl.push_back(rc[1]);
                rl.push_back(rc[2]);
                rl.push_back(rc[3]);
                rl.push_back(rc[4]);
                rl.push_back(rc[5]);
                ans.push_back(rl);
                rl[4]=rc[6];
                rl[5]=rc[7];
                ans.push_back(rl);
                rl[2] = rc[4];
                rl[3] = rc[5];
                ans.push_back(rl);
                rl[0] = rc[2];
                rl[1] = rc[3];
                ans.push_back(rl);
            }
            arr[i][j] = '0';
            arr[i + 1][j] = '0';
            arr[i][j + 1] = '0';
            arr[i + 1][j + 1]= '0';
        }
    }
    cout << ans.size() << "\n";
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<6;j++)
        cout << ans[i][j] << " ";
        cout << "\n";
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




