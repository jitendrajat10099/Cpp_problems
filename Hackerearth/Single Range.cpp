/*
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/signal-range/description/
*/
#include<bits/stdc++.h>
using namespace std;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int, int > ii;
#define ll long long
#define pb push_back
#define sz(a) int((a).size())
#define all(c) c.begin(), c.end()
#define tr(c, i) for(typeof((c)).begin() i = (c).begin ; i!=(c).end() ; i++)
#define endl "\n"
#define out(c) cout<<#c<<" : "<<c<<endl
#define outz(c,d) cout<<#c<<" : "<<c<<"  "<<#d<<" : "<<d<<endl
#define mp(x,y) make_pair((x),(y))
#define Pi 3.1415926535897
#define checkbit(n,b) ( (n >> b) & 1)
#define bsearch(arr,ind) (int)(lower_bound(all(arr),ind)-arr.begin())
#define fill(a,b) memset(a,b,sizeof(a))
const int mod=1000000007;
ll powmod(ll a,ll b) {ll res=1;a%=mod;for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a,ll b){if(a==0)return(b);else return(gcd(b%a,a));}
ll powmod(ll a,ll b,ll m) {ll res=1;a%=m;for(;b;b>>=1){if(b&1)res=res*a%m;a=a*a%m;}return res;}

int main()
{
    int t, n , i , a[1000000], ans[1000000];
    cin>>t;
    while(t--)
    {
        stack < int > s;
        cin>>n;
        int c= 0;
        for(i=0 ; i<n ; i++) cin>>a[i];
        for(i=0 ; i<n ; i++)
        {
            while(!s.empty() && a[s.top()]<= a[i])
            s.pop();
            if(s.empty())
            cout<<i+1<<" ";
            else
            cout<<i - s.top()<<" ";
            s.push(i);
        }
        cout<<endl;
    }
	return 0;
}
