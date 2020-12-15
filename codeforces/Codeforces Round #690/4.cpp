// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

bool palindrome(int num)
{
    int rev = 0, val;
    val = num;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if (val == rev)
        return true;
    else
        return false;
}

void solve()
{
    //write your code here
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin >> arr[i];
    if(n%2==0)
    {
        if(palindrome)
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




