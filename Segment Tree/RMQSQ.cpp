// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
# define INF 1000000
using namespace std;
typedef long long int lli;

vector<int>ans(4*100000, 0);

void buildTree(vector<int>&arr,int si,int ss,int se)
{
    if(ss==se){
        ans[si]=arr[ss];}
    else{
    int mid=(ss+se)/2;
    buildTree(arr,2*si+1,ss,mid);
    buildTree(arr,2 * si+2,mid+1,se);
    ans[si]=min(ans[2*si+1],ans[2*si+2]);}
}

int query(int si,int ss,int se,int qs,int qe)
{
    if(qs>se || qe<ss)
    return INF;
    if(qs<=ss && qe>=se)
    return ans[si];
    int mid=(ss+se)/2;
    int l=query(2*si+1,ss,mid,qs,qe);
    int r=query(2*si+2,mid+1,se,qs,qe);
    return min(l,r);
}

void solve()
{
    //write your code here
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin >> arr[i];
    buildTree(arr,0,0,n-1);
    // for(int i=0;i<4*n;i++)
    // cout << ans[i] << " ";
    int q;
    cin >> q;
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin >> l >> r;
        cout << query(0,0,n-1,l,r) << "\n";
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




