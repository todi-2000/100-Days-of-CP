// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

int arr[2][2], I[2][2];

void mul(int A[][2], int B[][2], int dim, int x)
{
    int c[dim + 1][dim + 1], k = 0;
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < dim; k++)
                c[i][j] += ((A[i][k] * B[k][j]) % mod);
            c[i][j] = c[i][j] % mod;
        }
    }
    for (int i = 0; i < dim && x == 0; i++)
    {
        for (int j = 0; j < dim; j++)
            arr[i][j] = c[i][j];
    }
    for (int i = 0; i < dim && x == 1; i++)
    {
        for (int j = 0; j < dim; j++)
            I[i][j] = c[i][j];
    }
}

void power(int arr[][2], int dim, int n)
{
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            if (i == j)
                I[i][j] = 1;
            else
                I[i][j] = 0;
        }
    }
    arr[0][0]=0,arr[0][1]=1,arr[1][0]=1,arr[1][1]=1;
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            mul(arr, arr, dim, 0);
            n /= 2;
        }
        else
        {
            mul(I, arr, dim, 1);
            n--;
        }
    }
}

void solve()
{
    //write your code here
    int n;
    cin >> n;
    int f1=0,f2=1;
    cout << f1 << " " << f2 << " ";
    for(int p=3;p<=n;p++)
    {
        power(arr,2,p-1);
        int val=(I[0][0]*f1)+(I[0][1]*f2);
        cout << val << " ";
    }
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
    while(t--)
    {
        solve();
    }
    return 0;
}




