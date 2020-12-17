// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

lli arr[101][101],I[101][101];


void mul(lli A[][101],lli B[][101],int dim,int x)
{
    lli c[dim+1][dim+1],k=0;
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        {
            c[i][j]=0;
            for(int k=0;k<dim;k++)
            c[i][j]+=((A[i][k]*B[k][j])%mod);
            c[i][j]=c[i][j]%mod;
        }
    }
    for (int i = 0; i < dim && x==0; i++)
    {
        for (int j = 0; j < dim; j++)
            arr[i][j]=c[i][j];
    }
    for (int i = 0; i < dim && x == 1; i++)
    {
        for (int j = 0; j < dim; j++)
            I[i][j] = c[i][j];
    }
}

void power(lli arr[][101],int dim,int n)
{
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        {
            if(i==j) I[i][j]=1;
            else I[i][j]=0;
        }
    }
    while(n!=0)
    {
        if(n%2==0)
        {
            mul(arr,arr,dim,0);
            n/=2;
        }
        else
        {
            mul(I,arr,dim,1);
            n--;
        }
        
    }
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        cout << I[i][j] << " ";
        cout << "\n";
    }
}

void solve()
{
    //write your code here
    int dim,n;
    cin >> dim >> n;
    for(int i=0;i<dim;i++)
    for(int j=0;j<dim;j++)
    cin >> arr[i][j];
    power(arr,dim,n);
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




