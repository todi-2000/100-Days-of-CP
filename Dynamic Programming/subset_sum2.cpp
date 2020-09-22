//Question: find the subset whose sum of elements is given sum 
// problem using dynamic programming in O(N* M) time & O(N*M) space
//Time Complexity: O(N*M) & Space Complexity: O(M)

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
    vector<lli>a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    int m;
    cin >> m;
    vector<lli>count(m+1);
    count[0]=1;
    for(int i=0;i<n;i++)
        for(int j=m;j>=0;j--)
        {
            if(j-a[i]>=0 && count[j-a[i]]!=0 && count[j]==0)
                count[j]=a[i];
        }
    if(count[m]!=0){
        cout << "true" << "\n";
        int j=m;
        while(j-count[j]>=0)
        {
            cout << count[j] << ' ';
            j=j-count[j];
        }
        cout << "\n";
    }
    else cout << "false" << "\n";
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




